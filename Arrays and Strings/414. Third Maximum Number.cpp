class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> top_three;

        for (int num : nums) {
            top_three.insert(num);
            if (top_three.size() > 3) {
                top_three.erase(top_three.begin());
            }
        }

        if (top_three.size() < 3) {
            return *max_element(top_three.begin(), top_three.end());
        }
        return *begin(top_three);
    }
};
