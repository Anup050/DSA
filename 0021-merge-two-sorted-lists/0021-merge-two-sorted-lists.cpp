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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode(0);
        ListNode* s = list1;
        ListNode* f = list2;
        ListNode* temp = list3;
        while(f && s){
            if(s->val < f->val){
                list3->next = s;
                s = s->next;
            }else{
                list3->next = f;
                f = f->next;
            }
            list3 = list3->next;
        }
        if(s == NULL){
            list3->next = f;
        }else{
            list3->next = s;
        }
        return temp->next;
    }
};