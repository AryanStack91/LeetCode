class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < score.size(); i++) {
            pq.push(make_pair(score[i], i));
        }

        vector<string> ans(score.size(), "0");

        int x = 1;
        while (!pq.empty()) {

            pair<int, int> top_ele = pq.top();
            pq.pop();

            int index = top_ele.second;

            if (x == 1) {
                ans[index] = "Gold Medal";
            } else if (x == 2) {
                ans[index] = "Silver Medal";
            } else if (x == 3) {
                ans[index] = "Bronze Medal";
            } else {
                ans[index] = to_string(x);
            }
            x++;
        }
        return ans;
    }
};