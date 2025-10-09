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
    void deleteNode(ListNode* node) {
        //1.Approach
        // node->val = node->next->val;
        // node->next = node->next->next;

        //2.Approach
        ListNode* prev = NULL;
        while(node && node->next){
            node->val = node->next->val;
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
        delete(node);
    }
};