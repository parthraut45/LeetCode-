class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        int x;
        for(int i = left; i <= right; i++){
            if (isSelfDividing(i)) {
                res.push_back(i);
            }
        }
        return res;
    }
    bool isSelfDividing(int n) {
        int original = n;
        int x;
        while (n > 0) {
            x = n % 10;
            if (x == 0 || original % x != 0) {
                return false;
            }
            n /= 10;
        }
        return true;
    }
};
