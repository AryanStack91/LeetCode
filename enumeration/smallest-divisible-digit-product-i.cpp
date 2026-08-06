class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int i = 0; i < 10; i++) {
            int x = n;
            int prod = 1;
            while (x > 0) {
                prod *= x % 10;
                x = x / 10;
            }
            if (prod % t == 0)
                return n;

            n++;
        }
        return -1;
    }
};