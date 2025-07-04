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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s;
        for(int i : nums){
            s.insert(i);
        }
        ListNode* l = new ListNode(0,head);
        ListNode* curr = l;
        while(curr->next){
            if(s.find(curr->next->val) != s.end()){
                curr->next = curr->next->next;
            }else{
                curr = curr->next;
            }
        }
        return l->next;
    }
};