class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(), potions.end());

        vector<int> ans(n, 0);

        for (int i = 0; i < n; i++) {
            long long x = spells[i];

            long long y = (success + x - 1) / x;

            int l = 0, r = m - 1, index = m;

            while (l <= r) {
                int mid = (l + r) / 2;

                if (potions[mid] >= y) {
                    index = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            ans[i] = m - index;
        }
        return ans;
    }
};