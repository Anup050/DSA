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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        int sum = 0;
        while(temp){
            if(temp->val == 0){
                if(sum != 0) v.push_back(sum);
                sum = 0;
            }else{
                sum += temp->val;
            }
            temp = temp->next;
        }
        temp = head;
        ListNode* prev = temp;
        for(int i : v){
            temp->val = i;
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        return head;
    }
};