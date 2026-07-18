class Solution {
public:
    int countConsistentStrings(string s, vector<string>& words) {
        vector<bool> v(26, 0);

        for (int i = 0; i < s.size(); i++) {
            v[s[i] - 'a'] = true;
        }

        int ans = 0;

        for (int i = 0; i < words.size(); i++) {
            string a = words[i];
            for (int j = 0; j < a.size(); j++) {
                if (v[a[j] - 'a'] == true) {

                    if (j == a.size() - 1) {
                        ans++;
                    }
                } else {
                    break;
                }
            }
        }
        return ans;
    }
};