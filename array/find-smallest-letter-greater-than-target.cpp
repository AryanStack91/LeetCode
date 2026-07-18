class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {

        int s = 0;
        int e = l.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (t < l[mid]) {
                e = mid - 1;
            } else
                s = mid + 1;
        }
        if(s == l.size()){
            return l[0];
        }
        return l[s];
    }
};