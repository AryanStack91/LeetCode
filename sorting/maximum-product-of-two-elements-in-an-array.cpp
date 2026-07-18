class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int ans = 1;
        for(int i = 0; i < 2; i++){
            ans = ans * (pq.top() - 1);
            pq.pop();
        }
        return ans;
    }
};