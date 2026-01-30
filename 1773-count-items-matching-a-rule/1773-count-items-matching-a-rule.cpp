class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        unordered_map<string,int> mp;
        mp["type"] = 0;
        mp["color"] = 1;
        mp["name"] = 2;

        int count = 0;
        for (int i = 0; i < items.size(); i++) {
            int idx = mp[ruleKey];
            if (items[i][idx] == ruleValue)
                count++;
        }
        return count;
    }
};
