class Solution {
public:
    int trap(vector<int>& ht) {
        int n = ht.size();

        int left = 0, right = n - 1;
        int leftmax = 0, rightmax = 0;
        int ans = 0;

        while (left < right) {

            leftmax = max(leftmax, ht[left]);
            rightmax = max(rightmax, ht[right]);

            if (leftmax < rightmax) {
                ans += leftmax - ht[left];
                left++;
            } else {
                ans += rightmax - ht[right];
                right--;
            }
        }
        return ans;
    }
};