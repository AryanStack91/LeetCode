class Solution {
public:
    bool isPerfectSquare(int num) {
              if(num==1){
                return true;
              }
              long st=1;
              long e=num/2;
              long   mid=0;
              while(st<=e){
                 mid=(st+e)/2;
                  long   sq=mid*mid;
                  if(sq==num){
                    return true;
                  }
                  else if(sq<num){
                    st=mid+1;
                  }
                  else{
                    e=mid-1;
                  }
              }
              return false;
    }
};