class Solution {
public:
    string largestOddNumber(string num) {

        int n = num.length() - 1;
        while (n >= 0) {
            if (num[n] % 2 == 0) {
                n--;
                continue;
            }
            break;
        }
        return num.substr(0, n + 1);
    }
};