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
        //O(n+m):time, O(n):space

        // ListNode *t1 = headA;
        // ListNode *t2 = headB;
        // ListNode *temp = NULL;
        // unordered_set<ListNode*> s;

        // while(t1){
        //     s.insert(t1);
        //     t1 = t1->next;
        // }
        // while(t2){
        //     if(s.find(t2) != s.end()){
        //         temp = t2;
        //         return temp;
        //     }
        //     t2 = t2->next;
        // }
        // return temp;

        //O(n+m):time, O(1):space

        ListNode *t1 = headA;
        ListNode *t2 = headB;

        int lenA = 0;
        while(t1){
            lenA++;
            t1 = t1->next;
        }
        int lenB = 0;
        while(t2){
            lenB++;
            t2 = t2->next;
        }

        t1 = headA;
        t2 = headB;
        if(lenA > lenB){
            int diff = lenA - lenB;
            for(int i=1; i<=diff; i++){
                t1 = t1->next;
            }
            while(t1 != t2){
                t1 = t1->next;
                t2 = t2->next;
            }
            return t1;
        }else{
            int diff = lenB - lenA;
            for(int i=1; i<=diff; i++){
                t2 = t2->next;
            }
            while(t1 != t2){
                t1 = t1->next;
                t2 = t2->next;
            }
            return t2;
        }
    }
};