class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(102);
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
           ans[nums[i]]++;
        }
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            int total=0;
            for(int j=0;j<nums[i];j++)
            {
                total=total+ans[j];
            }
            b.push_back(total);
        }
        return b;
    }
};
