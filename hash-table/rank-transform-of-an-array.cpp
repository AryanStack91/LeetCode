class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> rank;
        int r = 1;

        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        for (int x : temp) {
            if (rank.find(x) == rank.end()) {
                rank[x] = r++;
            }
        }

        for (int i = 0; i < arr.size(); i++) {

            arr[i] = rank[arr[i]];
        }
        return arr;
    }
};