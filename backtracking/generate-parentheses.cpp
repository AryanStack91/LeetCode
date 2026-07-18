class Solution {
public:
    void solve(string s, int o, int c, vector<string>& ans, int n) {
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }
        if (o < n)
            solve(s + '(', o + 1, c ,ans, n);
        if (c < o)
            solve(s + ')', o, c + 1, ans, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        solve("",0,0, ans, n);
        return ans;
    }
};