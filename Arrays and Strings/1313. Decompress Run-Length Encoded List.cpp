class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n= nums.size(),x;
        vector<int> v;
        for(int i=0; i<n-1; i+=2) {
            x=nums[i];
            for(int j=0;j<x;j++) {
                v.push_back(nums[i+1]);
            }
        }
        return v;
    }
};
