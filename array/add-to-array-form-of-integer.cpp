class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        for (int i = num.size() - 1; i >= 0; i--) {
            ans.push_back((k + num[i]) % 10);
            k = (k + num[i]) / 10;
        }
        while (k > 0) {
            ans.push_back(k % 10);
            k = k / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};