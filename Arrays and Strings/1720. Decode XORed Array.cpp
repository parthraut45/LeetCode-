class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result;
        result.push_back(first);
        result.push_back(first^encoded[0]);
        for(int i=1; i<encoded.size(); i++){
            result.push_back(result[i]^encoded[i]);
        }
        return result;
    }
};
