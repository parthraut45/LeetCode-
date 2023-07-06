class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransomNoteChars[26] = {0};
        int magazineChars[26] = {0};
        for (char c : ransomNote) {
            ransomNoteChars[c - 'a']++;
        }
        for (char c : magazine) {
            magazineChars[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (ransomNoteChars[i] > magazineChars[i]) {
                return false;
            }
        }
        return true;
    }
};
