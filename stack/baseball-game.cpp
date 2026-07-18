class Solution {
public:
    int calPoints(vector<string>& ope) {

        vector<int> a;

        for (int i = 0; i < ope.size(); i++) {
            if (ope[i] == "+") {
                a.push_back(a[a.size() - 1] + a[a.size() - 2]);
            }

            else if (ope[i] == "D") {
                a.push_back(2 * a[a.size() - 1]);
            }

            else if (ope[i] == "C") {
                a.pop_back();
            } else {
                a.push_back(stoi(ope[i]));
            }
        }
        int ans = 0;
        for (int i = 0; i < a.size(); i++) {
            ans += a[i];
        }

        return ans;
    }
};