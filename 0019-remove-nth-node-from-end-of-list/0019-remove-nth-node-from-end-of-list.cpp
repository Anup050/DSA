class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode* d = new ListNode(0, head);
        // ListNode* s = d;
        // ListNode* f = d;

        // for (int i = 0; i <= n; i++) {
        //     f = f->next;
        // }

        // while (f) {
        //     s = s->next;
        //     f = f->next;
        // }

        // s->next = s->next->next;

        // return d->next;
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        if(count == n){
            ListNode* tempHead = head->next;
            delete(head);
            return tempHead;
        }
        temp = head;
        for(int i=1; i<count-n; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
