/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;
        while(head) {
            arr.push_back(head->val);
            head = head->next;
        }
        int n = arr.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[i] > arr[st.top()]) {
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
        // vector<int> ans;
        // ListNode* curr = head;
        // while(curr){
        //     ListNode* temp = curr;
        //     while(temp && temp->val <= curr->val){
        //         temp = temp->next;
        //     }
        //     if(temp){
        //         ans.push_back(temp->val);
        //     }else{
        //         ans.push_back(0);
        //     }
        //     curr = curr->next;
        // }
        // return ans;
    }
};