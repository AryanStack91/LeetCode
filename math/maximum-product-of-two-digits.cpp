class Solution {
public:
    int maxProduct(int n) {
        string x = to_string(n);

        sort(begin(x), end(x));

        int s = x.size();

        return (x[s -1] - '0') * (x[s -2] - '0');
    }
};