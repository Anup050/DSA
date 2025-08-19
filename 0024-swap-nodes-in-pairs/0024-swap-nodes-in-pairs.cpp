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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;
        vector<int> v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int i=0, j=1;
        while(j<=v.size()-1){
            swap(v[i],v[j]);
            i += 2;
            j += 2;
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