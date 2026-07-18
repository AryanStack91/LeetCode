class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int ans = 0;
        int i = 0;
        long long x = coins;

        while (x > 0) {
            if (i > costs.size() - 1)
                break;

            x = x - costs[i++];
            if (x < 0) {
                break;
            }

            ans++;
        }
        return ans;
    }
};