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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp = head;
        vector<int> v1;
        while(temp){
            v1.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> v2;
        int i=0,j=1;
        v2.push_back(v1[0]);
        while(j<v1.size()){
            int a = v1[i];
            int b = v1[j];
            for(int k = min(a,b); k>=1; k--){
                if(a%k==0 && b%k==0){
                    v2.push_back(k);
                    v2.push_back(b);
                    break;
                }
            }
            i++;
            j++;
        }
        ListNode* dummy = new ListNode(v2[0]);
        temp = dummy;
        i = 1;
        while(i<v2.size()){
            temp->next = new ListNode(v2[i]);
            temp = temp->next;
            i++;
        }
        return dummy;
    }
};