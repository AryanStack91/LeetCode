class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int left_sum = 0;
        int right_sum = 0;
        int max_sum = 0;

        for (int i = 0; i < k; i++) {
            left_sum += cp[i];
        }
        max_sum = left_sum;

        int r_index = cp.size() - 1;

        for (int i = k - 1; i >= 0; i--) {
            left_sum = left_sum - cp[i];
            right_sum = right_sum + cp[r_index];
            r_index -= 1;

            max_sum = max(max_sum, left_sum + right_sum);
        }
        return max_sum;
    }
};