class Solution {
public:
    int maxFreqSum(string s) {

        vector<int> ans(26, 0);

        for (char a : s) {
            ans[a - 'a']++;
        }

        int vow = 0;
        int cons = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u'){
                vow = max(vow, ans[s[i] - 'a']);
            } else {
                cons = max(cons, ans[s[i] - 'a']);
            }
        }

        return vow + cons;
    }
};