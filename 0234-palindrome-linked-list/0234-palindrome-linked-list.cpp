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

        ListNode* s = head;
        ListNode* f = head;

        while(f->next && f->next->next){
            s = s->next;
            f = f->next->next;
        }
        ListNode* rev = reverse(s->next);
        s = head;
        while(rev){
            if(s->val != rev->val) return false;
            s = s->next;
            rev = rev->next;
        }
        return true;
    }
};