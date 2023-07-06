class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int count=0;
        int tail=n-1;
        while(tail>=0 && s[tail]==' ')
        tail--;
        while(tail>=0 && s[tail]!=' '){
            count++;
            tail--;
        }
        return count;
    }
};
