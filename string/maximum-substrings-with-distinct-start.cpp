class Solution {
public:
    int maxDistinct(string s) {

        unordered_map<char, int> mp;

        for (auto& i : s) {
            mp[i]++;
        }

        return mp.size();
    }
};