class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;

        for (auto i : tasks) {
            mp[i]++;
        }

        priority_queue<int> pq;

        for (auto it : mp) {
            pq.push(it.second);
        }

        int ans = 0;

        while (!pq.empty()) {
            vector<int> temp;

            int c = n + 1;

            int i = 0;

            while (i < c && !pq.empty()) {
                int top = pq.top();
                pq.pop();

                top--;

                if (top > 0) {
                    temp.push_back(top);
                }

                i++;

                ans++;
            }

            for (int x : temp) {
                pq.push(x);
            }
            if (pq.empty()) {
                break;
            }
            ans += (c - i);
        }
        return ans;
    }
};