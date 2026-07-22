class Solution {
public:
    int strStr(string s, string needle) {

        int x = needle.size();
        for (int i = 0; i < s.length(); i++) {
            string st = s.substr(i , x);
            if (st.find(needle) != string ::npos) {
                return i;
            }
        }

        return -1;
    }
};