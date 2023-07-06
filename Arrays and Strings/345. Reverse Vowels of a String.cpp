class Solution {
public:
    string reverseVowels(string s) {
          int left = 0, right = s.size() - 1;
        char vow[256] = {0};
        vow['a'] = 1, vow['A'] = 1, vow['e'] = 1, vow['E'] = 1, vow['i'] = 1, vow['I'] = 1, vow['o'] = 1, vow['O'] = 1, vow['u'] = 1, vow['U'] = 1;
        while(left < right){
            while(left < right && vow[s[left]] == 0){
                left++;
            }
            while(left < right && vow[s[right]] == 0){
                right--;
            }
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};
