class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& h, int t) {
        int n = h.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (h[i] >= t) {
                cnt++;
            }
        }
        return cnt;
    }
};