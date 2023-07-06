class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = 1;
        bool flag = false;
        while(num > 0){
            num -= i;
            i+=2;
        }
        if(num == 0){
            flag = true;
        }
        return flag;
    }
};
