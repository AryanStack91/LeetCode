class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(),
                                                          nums.end());
        int i = 0;

        while (!pq.empty()) {
            int top = pq.top();
            pq.pop();

            nums[i] = top;
            i++;
        }

        return nums;
    }
};