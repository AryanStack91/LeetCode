class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& nums,
                                                int freeStart, int freeEnd) {

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        

        for (int i = 0; i < nums.size(); i++) {
            int s = nums[i][0];
            int e = nums[i][1];

            if (!ans.empty() && ans.back()[1] >= e) {
                continue;
            }

            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j][0] <= e + 1) {
                    e = max(nums[j][1], e);
                } else {
                    break;
                }
            }
            ans.push_back({s, e});
        }
        vector<vector<int>> res;
        for (int i = 0; i < ans.size(); i++) {

            if (ans[i][0] > freeEnd || ans[i][1] < freeStart) {
                res.push_back(ans[i]);
                continue;
            }

            if (ans[i][0] < freeStart) {
                res.push_back({ans[i][0], freeStart - 1});
            }

            if (ans[i][1] > freeEnd) {
                res.push_back({freeEnd + 1, ans[i][1]});
            }
        }
        return res;
    }
};