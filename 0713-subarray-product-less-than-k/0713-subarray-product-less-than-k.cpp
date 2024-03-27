class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0 ;
        int product = 1;
        int end = 0;
        for(int start = 0 ; start < nums.size() ; start++){
            product *= nums[start];
            while(product >= k and start >= end){
                product /= nums[end];
                end++;
                
            }
            count += (start - end + 1);
        }
        return count;
        }
};