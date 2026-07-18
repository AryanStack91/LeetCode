class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>> pq;

        for (auto& x : s) {
            mp[x]++;
        }

        for (auto& p : mp) {
            pq.push({p.second, p.first});
        }

        string ans = "";

        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();

            ans += string(top.first, top.second);
        }

        return ans;
    }
};