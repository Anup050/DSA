/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1 = headA;
        ListNode *t2 = headB;
        ListNode *temp = NULL;
        unordered_set<ListNode*> s;

        while(t1){
            s.insert(t1);
            t1 = t1->next;
        }
        while(t2){
            if(s.find(t2) != s.end()){
                temp = t2;
                return temp;
            }
            t2 = t2->next;
        }
        return temp;
    }
};