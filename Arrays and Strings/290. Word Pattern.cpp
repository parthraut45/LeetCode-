class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        vector<string> words;
        int last_space_idx = -1;
        for (int str_idx = 0; str_idx <= s.size(); str_idx++) {
            if (str_idx == s.size() || s[str_idx] == ' ') {
                int start_idx = last_space_idx + 1;
                int end_idx = str_idx - 1;
                words.push_back(s.substr(start_idx, end_idx - start_idx + 1));
                last_space_idx = str_idx;
            }
        }
        
        if (words.size() != pattern.size()) {
            return false;
        }

        unordered_map<char, string> char_to_word;
        unordered_map<string, char> word_to_char;
        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string word = words[i];
            if (char_to_word.count(c) && char_to_word[c] != word) {
                return false;
            }
            if (word_to_char.count(word) && word_to_char[word] != c) {
                return false;
            }
            char_to_word[c] = word;
            word_to_char[word] = c;
        }
        return true;
    }
};
