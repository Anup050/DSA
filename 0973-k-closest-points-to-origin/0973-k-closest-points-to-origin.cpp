class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        vector<pair<float,int>> vp;
        for(int i=0; i<points.size(); i++){
            int a = points[i][0];
            int b = points[i][1];
            float num = sqrt(a*a+b*b);
            vp.push_back({num,i});
        }
        sort(begin(vp), end(vp));
        for(int i=0; i<k; i++){
            pair<int,int> p = vp[i];
            int j = p.second;
            ans.push_back(points[j]);
        }
        return ans;
    }
};
