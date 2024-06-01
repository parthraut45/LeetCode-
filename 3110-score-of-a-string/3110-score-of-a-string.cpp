class Solution {
public:
    int scoreOfString(string s) {
        int diff = 0;
        for(int i = 1; i < s.length() ; i++){
            diff += abs((s[i] - '0') - (s[i-1] - '0'));
        }
        return diff;
    }
};