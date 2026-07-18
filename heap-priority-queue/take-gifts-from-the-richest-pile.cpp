class Solution {

public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        for (int i = 0; i < k; i++) {
            sort(gifts.begin(), gifts.end());
            long long a = sqrt(gifts[n - 1]);
            gifts.pop_back();
            gifts.push_back(a);
        }
        long long sum = 0;
        for (auto i : gifts) {
            sum += i;
        }
        return sum;
    }
};