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
    int pairSum(ListNode* head) {
        // vector<int> v;
        // ListNode* temp = head;
        // while(temp){
        //     v.push_back(temp->val);
        //     temp = temp->next;
        // }
        // int mSum = INT_MIN;
        // for(int i=0; i<v.size(); i++){
        //     int j = v.size()-1-i;
        //     mSum = max(mSum,v[i]+v[j]);
        // }
        // return mSum;
        ListNode *f = head, *s = head;
        while(f && f->next){
            s = s->next;
            f = f->next->next;
        }
        ListNode *prev = NULL, *nn = NULL;
        while(s){
            nn = s->next;
            s->next = prev;
            prev = s;
            s = nn;
        }
        int maxS = INT_MIN;
        while(prev){
            maxS = max(maxS, prev->val + head->val);
            prev = prev->next;
            head = head->next;
        }
        return maxS;
    }
};