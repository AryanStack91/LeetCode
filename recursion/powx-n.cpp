class Solution {
public:
double Power(double x, long n){
    if(n == 0){
        return 1.0;
    }
    if(n == 1){
        return x;
    }

    if(n % 2 == 0){
        return Power(x * x, n/2);
    }
    else{
        return x * Power(x, n - 1);
    }

}
    double myPow(double x, int n) {
        long  num = n;

        if (n < 0) {
            return (1.0 / Power(x , -1 * num));
        } else {
            return Power(x, num);
        }
    }
};