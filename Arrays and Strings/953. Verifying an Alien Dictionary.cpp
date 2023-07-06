class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> order_map;
        for (int i = 0; i < order.length(); i++) {
            order_map[order[i]] = i;
        }

        for (int i = 1; i < words.size(); i++) {
            string first_word = words[i - 1];
            string second_word = words[i];
            int length = min(first_word.length(), second_word.length());
            bool is_sorted = false;
            for (int j = 0; j < length; j++) {
                if (order_map[first_word[j]] < order_map[second_word[j]]) {
                    is_sorted = true;
                    break;
                }
                else if (order_map[first_word[j]] > order_map[second_word[j]]) {
                    return false;
                }
            }

            if (!is_sorted && first_word.length() > second_word.length()) {
                return false;
            }
        }
        return true;
    }
};
