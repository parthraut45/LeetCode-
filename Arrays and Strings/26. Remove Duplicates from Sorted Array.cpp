class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int unique_index = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[unique_index]) {
            unique_index++;
            nums[unique_index] = nums[i];
        }
    }

    return unique_index + 1;
    }
};
