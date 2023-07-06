class Solution {
public:
    string freqAlphabets(string s) {
        string res = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '#'){
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                res = (char)(num + 'a' - 1) + res;
                i -= 2;
            } 
            else{
                res = (char)(s[i] - '0' + 'a' - 1) + res;
            }
        }
        return res;
    }
};
