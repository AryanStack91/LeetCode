class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long sum = 0, r = 0, t;
        t = x;
        while (x != 0) {
            r = x % 10;
            sum = sum * 10 + r;
            x = x / 10;
        }
        if (t == sum) {
            return true;
        } else {
            return false;
        }
    }
};