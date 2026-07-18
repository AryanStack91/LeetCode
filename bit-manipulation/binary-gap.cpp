class Solution {
public:
    int binaryGap(int n) {
        bool one = false;
        int ans = 0;
        int cnt = 0;
        int a = 0;
        while (n > 0) {
            cnt++;
            int x = n & 1;
            n >>= 1;

            if (x == 1 && one == false) {
                one = true;
                a = cnt;
            } else if (x == 1 && one == true) {
                ans = max(ans, cnt - a);
                a = cnt;
            }
        }
        return ans;
    }
};