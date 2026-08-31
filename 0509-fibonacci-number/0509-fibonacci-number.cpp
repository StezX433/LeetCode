class Solution {
public:
    int fib(int n) {
        int sum =0;
        
        if (n==0){
            sum =0;
        }else if (n==1){
            sum =1;
        }

        if (n>=2){
            sum+=fib(n-1)+fib(n-2);
        }

        return sum;
    }
};