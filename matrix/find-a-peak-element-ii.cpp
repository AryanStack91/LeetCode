class Solution {
private:
    int maxindex(vector<vector<int>>& matr, int n, int col) {
        int maxvalue = -1;
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (matr[i][col] > maxvalue) {
                maxvalue = matr[i][col];
                index = i;
            }
        }
        return index;
    }

public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int l = 0, r = m - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int maxrowindex = maxindex(mat, n, mid);
            int left = mid - 1 >= 0 ? mat[maxrowindex][mid - 1] : -1;
            int right = mid + 1 < m ? mat[maxrowindex][mid + 1] : -1;
            if (mat[maxrowindex][mid] > left && mat[maxrowindex][mid] > right) {
                return {maxrowindex, mid};
            } else if (mat[maxrowindex][mid] < left) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return {-1, -1};
    }
};