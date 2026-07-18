class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            long long sum = 0;
            for (int j = i; j < n; j++) {

                sum += nums[j];

                int last = sum % 10;

                long long t = sum;

                while (t >= 10) {
                    t = t / 10;
                }

                int first = t;

                if(first == x && last == x){
                    ans++;
                }
            }
        }
        return ans;
    }
};