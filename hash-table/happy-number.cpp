class Solution {
public:
    int square(int n) {
        int sq = 0;
        while (n > 0) {
            int r = n % 10;
            sq = sq + (r * r);
            n = n / 10;
        }

        return sq;
    }
    bool isHappy(int n) {
        int i = 0;
       
        if (n == 2) {
            return false;
        }
        unordered_map<int, int> mp;

        while (n != 1) {

            if (mp.find(n) != mp.end()) {
                return false;
            } else {
                n = square(n);
                mp.insert({i, n});
                i++;
            }
        }

        return true;
    }
};