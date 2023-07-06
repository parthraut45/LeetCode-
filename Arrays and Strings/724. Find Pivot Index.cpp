class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int prev = 0;
        int right = accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        for (int i=0; i<n ; i++){
            left += nums[i];
            right -= prev;
            if (left == right){
                return i;
            }
            prev = nums[i];
        }
        return -1;
    }
};
