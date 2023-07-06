class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> outgoing;
        for (int i = 0; i < paths.size(); i++) {
            ++outgoing[paths[i][0]];
        }
        for (int i = 0; i < paths.size(); i++) {
            if (!outgoing.count(paths[i][1])) {
                return paths[i][1];
            }
        }
        return "";
    }
};
