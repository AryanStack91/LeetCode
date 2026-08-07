class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows >= s.size() || numRows == 1) {
            return s;
        }
        vector<string> v(numRows);

        bool dir = false;
        int x = 0;

        for (auto i : s) {
            v[x] += i;

            if (x == 0 || x == numRows - 1) {
                dir = !dir;
            }

            x += dir ? 1 : -1;
        }

        string ans = "";

        for (auto x : v) {
            ans += x;
        }

        return ans;
    }
};