class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> s(nums1.begin(), nums1.end());
    vector<int> res;
    for (int x : nums2)
        if (s.erase(x)){
            res.push_back(x);
        }
    return res;
    }
};
