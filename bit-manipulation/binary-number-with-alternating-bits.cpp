class Solution {
public:
    bool hasAlternatingBits(int n) {
        int a = -1;

        while (n > 0) {
            int x = n & 1;
            n >>= 1;
            if (x == 1 && a == 1 || (x == 0 && a == 0))
                return false;
            a = x;
        }
        return true;
    }
};