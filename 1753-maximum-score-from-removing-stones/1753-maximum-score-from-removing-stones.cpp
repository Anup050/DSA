class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);pq.push(b);pq.push(c);
        int count = 0;
        while(pq.size()>1){
            int n1 = pq.top();
            pq.pop();
            int n2 = pq.top();
            pq.pop();
            count++;
            n2--;n1--;
            if(n1>0) pq.push(n1);
            if(n2>0) pq.push(n2);
        }

        return count;
    }
};