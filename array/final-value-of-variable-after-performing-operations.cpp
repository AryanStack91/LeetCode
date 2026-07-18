class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == "X++" || s[i] == "++X") {
                ans += 1;
            }
              else {
                ans -= 1;
            }
        }
        return ans;
    }
};