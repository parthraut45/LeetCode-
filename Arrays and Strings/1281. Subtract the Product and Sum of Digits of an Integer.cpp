class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, multiply = 1;
        while(n){
            sum += n % 10;
            multiply *= n % 10;
            n /= 10;
        }
        return multiply - sum;
    }
};
