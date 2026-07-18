class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();

        if (row * col != r * c) {
            return mat;
        }

        vector<vector<int>> ans(r, vector<int>(c));

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int x = i * col + j;

                ans[x / c][x % c] = mat[i][j];
            }
        }
        return ans;
    }
};