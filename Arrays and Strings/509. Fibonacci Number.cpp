class Solution {
public:
    int fib(int n) {
        int f0 = 0;
        int f1 = 1;
        while(n > 0){
            int fn = f0 + f1;
            f0 = f1;
            f1 = fn;
            n--;
        }
        return f0;
    }
};
