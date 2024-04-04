class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int count = 0;
        int maxcount = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '(') count++;
            else if(s[i] == ')') count--;
            maxcount = max(count , maxcount);
        }
    return maxcount;
    }
};