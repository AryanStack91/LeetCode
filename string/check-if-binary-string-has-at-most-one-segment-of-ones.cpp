class Solution {
public:
    bool checkOnesSegment(string s) {
        int ans = 0;
         if(s[0] == '1'){
            ans = 1;
         }
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == '1' && s[i - 1] == '0') {
                ans += 1;
            }

        }
        return ans == 1 ? true : false;
    }
};