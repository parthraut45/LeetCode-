class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sheights(heights);
        int count = 0;
        sort(sheights.begin(), sheights.end());
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != sheights[i]){
                count++;
            }
        }
        return count;
    }
};
