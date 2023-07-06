class Solution {
public:
    bool isPowerOfThree(int n) {
        bool flag = false;
        for(int i = 0; i <= 32; i++){
            if(n==pow(3,i)){
                flag = true;
            }
        }
        return flag;
    }
};
