class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<int> ans(nums.size(), -1);

        stack<int> s;
        for (int i = 2 * nums.size() - 1; i >= 0; i--) {
            while (s.size() > 0 && s.top() <= nums[i % n]) {
                s.pop();
            }
            if (i < n) {

                if (!s.empty())
                    ans[i] = s.top();
            }
            s.push(nums[i % n]);
        }

        return ans;
    }
};