class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());

        string new1 = "";
        string new2 = "";

        for (int i = 0; i < s.length(); i++) {

            new1 += s[i++];

            new2 += s[i];
        }

        return stoi(new1) + stoi(new2);
    }
};