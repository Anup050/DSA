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
    ListNode* reverse(ListNode* head) {

        ListNode* curr = head;
        ListNode* nn = NULL;
        ListNode* prev = NULL;
        while(curr){
            nn = curr->next;
            curr->next=prev;
            prev = curr;
            curr = nn;
        }
        
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // vector<int> v;
    
        // ListNode* temp = head;
        // while(temp){
        //     v.push_back(temp->val);
        //     temp = temp->next;
        // }
        // int i=0,j=v.size()-1;
        // while(i<j){
        //     if(v[i] != v[j]) return false;
        //     i++;
        //     j--;
        // }
        // return true;

        ListNode* temp  = head;
        ListNode* curr  = new ListNode(0);
        ListNode* dummy = curr;
    
        while(temp){
            dummy->next = new ListNode(temp->val);
            dummy = dummy->next;
            temp  = temp->next; 
        }

        curr = curr->next;
        curr = reverse(curr);
        ListNode* a = head;
        ListNode* b = curr;
        while(a){
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};