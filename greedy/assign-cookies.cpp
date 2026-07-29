class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if (s.size() == 0) {
            return 0;
        }
        int ans = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) {
            int x = -1;
            for (int j = 0; j < g.size(); j++) {
                if (s[i] >= g[j]) {
                    x = j;
                    ans++;
                    break;
                }
            }
            if (x != -1)
                g.erase(g.begin() + x);
            if (s.size() == 0) {
                return ans;
            }
        }
        return ans;
    }
};