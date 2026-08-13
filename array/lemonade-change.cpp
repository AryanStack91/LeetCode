class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cash = 0;

        for (int i : bills) {
            if (i == 5) {
                cash += i;
            } else {
                if (cash < i - 5)
                    return false;
                cash += 5;
                cash -= (i - 5);
            }
        }
        return true;
    }
};