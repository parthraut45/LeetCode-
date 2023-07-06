class Solution {
public:
    int firstUniqChar(std::string s) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        bool is_unique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && s[i] == s[j]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            return i;
        }
    }
    return -1;
    }
};
