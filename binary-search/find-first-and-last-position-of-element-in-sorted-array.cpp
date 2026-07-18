class Solution {
public:
    int lastOccurence(vector<int>& v, int key) {
        int start = 0;
        int n = v.size();
        int end = n - 1;
        int res = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (v[mid] == key) {
                res = mid;
                start = mid + 1;

            } else if (key < v[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return res;
    }
    int firstOcuurence(vector<int>& v, int key) {
        int start = 0;
        int n = v.size();
        int end = n - 1;
        int res = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (v[mid] == key) {
                res = mid;
                end = mid - 1;

            } else if (key < v[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOcuurence(nums, target);
        int last = lastOccurence(nums, target);
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};