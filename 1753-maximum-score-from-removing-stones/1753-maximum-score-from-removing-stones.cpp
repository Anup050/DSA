class Solution {
public:
    int maximumScore(int a, int b, int c) {

        long long sum = 1LL*a + b + c;
        long long mx = max({a, b, c});

        if(mx > sum - mx) {
            return sum - mx;
        }

        return sum / 2;


        // priority_queue<int> pq;
        // pq.push(a);pq.push(b);pq.push(c);
        // int count = 0;
        // while(pq.size()>1){
        //     int n1 = pq.top();
        //     pq.pop();
        //     int n2 = pq.top();
        //     pq.pop();
        //     count++;
        //     n2--;n1--;
        //     if(n1>0) pq.push(n1);
        //     if(n2>0) pq.push(n2);
        // }

        // return count;
    }
};