class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int countl = 0, countr = 0;
        for(int i = 0; i < n/2; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                countl++;
            }
        }
        for(int i = n/2; i < n; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                countr++;
            }
        }
        if(countl == countr){
            return true;
        }
        else{
            return false;
        }
    }
};
