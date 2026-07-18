class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string x = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                x += s[i];
            }
        }
        if(x.size() == 0){
            return 0;
        }
        int sum = 0;

        for (int i = 0; i < x.size(); i++) {
            sum += (x[i] - '0');
        }
        long long a = (long long)(stoi(x)) * sum;
        return a;
    }
};