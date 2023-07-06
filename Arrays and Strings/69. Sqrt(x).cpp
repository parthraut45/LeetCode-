class Solution {
public:
    int mySqrt(int x) {
        if(x<0){
            return -1;
        }
        if(x<=1){
            return x;
        }
        int left = 0, right = x;
        while (left <= right){
            int mid = left + (right - left)/2;
            if (x/mid == mid){
                return mid;
            }
            else if (x/mid < mid){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return right;
    }
};
