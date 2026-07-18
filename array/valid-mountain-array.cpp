class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) {
            return false;
        }
        int i = 1;
        for (int j = 1; j < n - 1; j++) {
            if (arr[j] > arr[i]) {
                i = j;
            }
        }
        bool asc = true;
        for (int j = 0; j < i; j++) {
            if (arr[j] >= arr[j + 1]) {
                asc = false;
            }
        }
        bool dec = true;

        for (int j = i; j < n - 1; j++) {
            if (arr[j] <= arr[j + 1]) {
                dec = false;
            }
        }
        return (asc && dec);
    }
};