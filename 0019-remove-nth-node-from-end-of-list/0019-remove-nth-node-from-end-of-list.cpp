class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* d = new ListNode(0, head);
        ListNode* s = d;
        ListNode* f = d;

        for (int i = 0; i <= n; i++) {
            f = f->next;
        }

        while (f) {
            s = s->next;
            f = f->next;
        }

        s->next = s->next->next;

        return d->next;
    }
};
