class Solution {
public:
    bool isPowerOfFour(int n) {
        bool flag = false;
        for(int i = 0; i <= 32; i++){
            if(n==pow(4,i)){
                flag = true;
            }
        }
        return flag;
    }
};
