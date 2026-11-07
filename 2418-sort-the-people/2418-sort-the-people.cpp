class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> ppl;
        for (int i = 0; i < names.size(); i++) {
            ppl.push_back({heights[i], names[i]});
        }
        sort(ppl.rbegin(), ppl.rend());
        vector<string> nm;
        for (auto& p : ppl) {
            nm.push_back(p.second);
        }
        return nm;
    }
};