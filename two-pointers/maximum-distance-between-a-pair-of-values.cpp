class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;

        int j = 0;
        int i = 0;

        while (i < nums1.size()  && j < nums2.size()) {

            if (nums1[i] <= nums2[j] && i <= j) {
                ans = max(ans, j - i);
                j++;
            }

            else if(nums1[i] > nums2[j] && i <= j){
                i++;
            }
            else if(nums1[i] <= nums2[j] && i > j){
                j++;
            }
            else{
                continue;
            }
        }
        return ans;
    }
};