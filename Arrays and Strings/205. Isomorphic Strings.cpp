class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map1, map2;
        int i,j;
        if(s.size()!=t.size()){
            return 0;
        }
        for(i=0; i<s.size(); i++){
            if((map1[s[i]] && map1[s[i]]!=t[i])||(map2[t[i]] && map2[t[i]]!=s[i])){
                return 0;
            }
            else{
                map1[s[i]]=t[i];
                map2[t[i]]=s[i];
            }
        }
        return 1;
    }
};
