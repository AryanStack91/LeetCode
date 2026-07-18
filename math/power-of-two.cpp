class Solution {
public:
    bool isPowerOfTwo(int n) {
        
         for(long i=0;i<n;i++){
          long x = pow(2, i);
          if(x==n){
            return true;
          }
          if(x>n){
            return false;
          }
            }
         return false;
         
  }
};