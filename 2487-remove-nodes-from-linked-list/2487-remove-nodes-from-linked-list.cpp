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
    ListNode* reverseL(ListNode* head){
        ListNode* prev = NULL;
        ListNode* nn = NULL;
        ListNode* curr = head;
        while(curr){
            nn = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nn;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* temp = reverseL(head);

        while(temp){
            if(st.empty() || temp->val >= st.top()->val){
                st.push(temp);
            }
            temp = temp->next;
        }

        ListNode* ans = new ListNode(0);
        ListNode* d = ans;

        while(!st.empty()){
            ans->next = st.top();
            ans = ans->next;
            st.pop();
        }
        ans->next = NULL;
        return d->next;
    }
};
