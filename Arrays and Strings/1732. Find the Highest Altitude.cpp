class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alts;
        alts.push_back(0);
        int sum = 0;
        for(int i = 0; i < gain.size(); i++){
            sum+=gain[i];
            alts.push_back(sum);
        }
        int n = *max_element(alts.begin(), alts.end());
        return n;
    }
};
