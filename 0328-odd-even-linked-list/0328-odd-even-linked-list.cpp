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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* l1 = new ListNode(-1);
        ListNode* l2 = new ListNode(-1);

        ListNode* e  = l1;
        ListNode* o  = l2;
        ListNode* temp = head;
        int count = 0;

        while(temp){
            count++;
            temp = temp->next;
        }

        temp = head;
        for(int i=1; i<=count; i++){
            if(i%2==0){
                e->next = temp;
                e = e->next;
            }else{
                o->next = temp;
                o = o->next;
            }
            temp = temp->next;
        }
        e->next = NULL;
        o->next = l1->next;
        return l2->next;
    }
};