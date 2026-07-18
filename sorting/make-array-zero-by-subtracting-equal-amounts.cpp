class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        unordered_map<int, int> mp;

        for (int i : nums) {

            if (i == 0)
                continue;
            mp[i]++;
        }

        return mp.size();
    }
};