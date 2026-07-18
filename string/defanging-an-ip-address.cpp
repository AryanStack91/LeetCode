class Solution {
public:
    string defangIPaddr(string s) {
        string a = "";
        for (char c : s) {
            if (c == '.') {
                a += "[.]";
            } else {
                a += c;
            }
        }
        return a;
    }
};