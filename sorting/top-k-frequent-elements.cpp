class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        for (auto i : nums) {
            mp[i]++;
        }

        for (auto i : mp) {
            pq.push(make_pair(i.second, i.first));

            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            pair<int, int> top = pq.top();
            pq.pop();

            ans.push_back(top.second);
        }

        return ans;
    }
};