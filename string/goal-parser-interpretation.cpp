class Solution {
public:
    string interpret(string s) {
        string a = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'G') {
                a += 'G';
            } else if (s[i] == '(' && s[i + 1] == ')') {
                a += 'o';
                i++;
            } else {
                a += "al";
                i += 3;
            }
        }
        return a;
    }
};