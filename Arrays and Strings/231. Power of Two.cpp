class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = false;
        for(int i = 0; i < 32; i++){
            if(n == pow(2, i)){
                flag = true;
            }
        }
        return flag;
    }
};
