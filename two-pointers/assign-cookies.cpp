class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size() == 0){
            return 0;
        }
        int ans = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int i = 0; i < g.size(); i++) {
            int x = 0;
            for (int j = 0; j < s.size(); j++) {
                if (s[j] >= g[i]) {
                    x = j;
                    ans++;
                    break;
                }
            }
            s.erase(s.begin() + x);
        }
        return ans;
    }
};