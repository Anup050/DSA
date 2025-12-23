class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int a = INT_MAX;
        int b = INT_MIN;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        bool flag = true;
        int idx1 = 0;
        int idx2 = 0;
        int count = 1;

        while(temp2 && temp2->next){
            if(((temp2->val > temp1->val) && (temp2->val > temp2->next->val)) ||
               ((temp2->val < temp1->val) && (temp2->val < temp2->next->val))){
                
                if(flag){
                    idx1 = count;
                    idx2 = count;
                    flag = false;
                } else {
                    a = min(a, count - idx2);
                    b = max(b, count - idx1);
                    idx2 = count;
                }
            }
            temp1 = temp2;
            temp2 = temp2->next;
            count++;
        }

        if(a == INT_MAX) return {-1, -1};
        return {a, b};
    }
};
