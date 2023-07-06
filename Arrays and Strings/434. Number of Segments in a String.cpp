class Solution {
public:
    int countSegments(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){ 
                while(i<n && s[i]!=' '){
                    i++;
                }
                count++;
            }
        }
        return count;
    }
};
