class Solution {
private:
    int findMax(vector<int>& piles) {
        int maxi = INT_MIN;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long cal_b(vector<int>& piles, int mid) {
        int n = piles.size();
        long long t_ba = 0;
        for (int i = 0; i < n; i++) {
            t_ba += ceil((double)piles[i] / (double)mid);
        }
        return t_ba;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1, high = findMax(piles);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long t_b = cal_b(piles, mid);
            if (t_b <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
