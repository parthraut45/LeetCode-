class Solution {
public:
    int tribonacci(int n) {
        vector<int> v;
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        for(int i = 3; i <= n; i++){
            v[i%3] = v[0] + v[1] + v[2];
        }
        return v[n%3];
    }
};
