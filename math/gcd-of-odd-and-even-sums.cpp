class Solution {
private:
  int gcd(int a, int b){
    if(b == 0){
        return a;
    }
        return gcd(b, a % b);
    
  }
public:
    int gcdOfOddEvenSums(int n) {
        int odd_sum = 0;
        int even_sum = 0;
        int i = 1;
        while(i <= n + n){
            if(i % 2 == 0){
                even_sum += i;
            }
            else{
                odd_sum += i;
            }
            i++;
        }
        return gcd(odd_sum, even_sum);
    }
};