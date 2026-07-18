class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        double ans = 51;
        while (i <= j) {
            double avg = (float)(nums[i] + nums[j]) / 2;
            ans = min(ans, avg);
            i++;
            j--;
        }

        return ans;
    }
};