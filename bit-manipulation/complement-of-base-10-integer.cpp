class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int x=0;
        if(m==0)
           return 1;
        while(m!=0){
            x = (x<<1) | 1;
            m = m>>1;
        }
        int ans= (~n) & x;
        return ans;
    }
};