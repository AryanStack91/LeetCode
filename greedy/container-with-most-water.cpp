class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int left = 0;
        int right = n - 1;
        int max_water = 0;

        while (left < right) {
            int width = right - left;
            int mini = min(h[left], h[right]);
            int area = width * mini;
            max_water = max(area, max_water);
            if (h[left] < h[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_water;
    }
};