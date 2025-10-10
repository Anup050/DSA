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

    ListNode* merge(ListNode* list1, ListNode* list2) {

        ListNode* c = new ListNode(0);
        ListNode* temp = c;

        while(list1 && list2){
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
                
            }else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        
        if(list1 == NULL){
            temp->next = list2;
        }else{
            temp->next = list1;
        }
        return c->next;

    }

    ListNode* sortList(ListNode* head) {
        
        // vector<int> v;
        // ListNode* temp = head;
        // while(temp){
        //     v.push_back(temp->val);
        //     temp = temp->next;
        // }
        // temp = head;
        // sort(begin(v),end(v));
        // for(int i=0; i<v.size(); i++){
        //     temp->val = v[i];
        //     temp = temp->next;
        // }
        // return head;

        if(!head || !head->next) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next  = NULL;

        a = sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c;

    }
};