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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int i=0;
        while(i+k<=v.size()){
            int l = i;
            int j=i+k-1;
            i = j+1;
            while(l<=j){
                swap(v[l], v[j]);
                l++;j--;
            }
        }
        ListNode* dummy = new ListNode(v[0]);
        temp = dummy;
        for(int i=1; i<v.size(); i++){
            temp->next = new ListNode(v[i]);
            temp = temp->next;
        }
        return dummy;
    }
};