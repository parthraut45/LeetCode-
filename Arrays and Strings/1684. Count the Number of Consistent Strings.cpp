class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words){
        int ans = 0;
        for(auto word: words){
            bool flag = true;
            for(auto x: word){
                if(allowed.find(x) == -1){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans++;
            }
        }
        return ans;
    }
};
