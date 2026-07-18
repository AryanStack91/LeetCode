class Solution {
private:
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }

        return gcd(b, a % b);
    }

public:
    long long gcdSum(vector<int>& nums) {
        long long ans = 0;
        vector<int> prefixGcd(nums.size(), 0);

        int maxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);

            prefixGcd[i] = gcd(nums[i], maxi);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int i = 0;
        int j = prefixGcd.size() - 1;

        while(i < j){
            ans += gcd(prefixGcd[i++], prefixGcd[j--]);
        }
        return ans;
    }
};