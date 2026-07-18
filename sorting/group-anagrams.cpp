class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            if (mp.find(key) == mp.end()) {
                mp[key] = vector<string>();
            }
            mp[key].push_back(str);
        }
        vector<vector<string>> result;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            result.push_back(it->second);
        }
        return result;
    }
};