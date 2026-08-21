class Solution {
public:
    void bucketSort(vector<int>& nums, int n) {
        vector<float> bucket[n];

        // Put elements into buckets
        for (int i = 0; i < n; i++) {
            int index = n * nums[i];
            bucket[index].push_back(nums[i]);
        }

        // Sort each bucket
        for (int i = 0; i < n; i++)
            sort(bucket[i].begin(), bucket[i].end());

        // Merge buckets
        int k = 0;
        for (int i = 0; i < n; i++) {
            for (float x : bucket[i])
                nums[k++] = x;
        }
    }
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0;
        }
        // sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 1; i < nums.size(); i++) {
            int diff = nums[i] - nums[i - 1];
            ans = max(ans, diff);
        }
        return ans;
    }
};