class Solution {
public:
    bool check_bits(int n, unordered_set<int> s) {
        int cnt = 0;
        while (n > 0) {
            int x = n & 1;
            n = n >> 1;

            if (x == 1) {
                cnt++;
            }
        }
        if (s.count(cnt))
            return 1;

        return 0;
    }
    int countPrimeSetBits(int left, int right) {
        int result = 0;
        unordered_set<int> s = {2, 3, 5, 7, 11, 13, 17, 19};

        for (int i = left; i <= right; i++) {
            if (check_bits(i, s)) {
                result++;
            }
        }
        return result;
    }
};