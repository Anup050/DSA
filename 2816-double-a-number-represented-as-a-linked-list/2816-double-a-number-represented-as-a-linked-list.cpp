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
    ListNode* doubleIt(ListNode* head) {
        // stack<int> st1;
        // stack<int> st2;
        // ListNode* temp = head;
        // while(temp){
        //     st1.push(temp->val);
        //     temp = temp->next;
        // }
        // int carry = 0;
        // ListNode* d = new ListNode(0);
        // while(!st1.empty()){
        //    int n = st1.top()*2 + carry;
        //    st2.push(n%10);
        //    carry = n/10;
        //    st1.pop();
        //    if(st1.size() == 0 && carry != 0){
        //     d->val = carry;
        //    }
        // }
        // if(d->val != 0){
        //     d->next = head;
        //     temp = head;
        //     head = d;
        // }else{
        //     temp = head;
        // }

        // while(!st2.empty()){
        //     temp->val = st2.top();
        //     st2.pop();
        //     temp = temp->next;
        // }
        // return head;

        stack<ListNode*> st;
        ListNode* temp = head;
        
        while (temp) {
            st.push(temp);
            temp = temp->next;
        }
        
        int carry = 0;
        
        while (!st.empty()) {
            ListNode* node = st.top();
            st.pop();
            
            int total = node->val * 2 + carry;
            node->val = total % 10;
            carry = total / 10;
        }
        
        if (carry > 0) {
            ListNode* newHead = new ListNode(carry);
            newHead->next = head;
            head = newHead;
        }
        
        return head;

    }
};