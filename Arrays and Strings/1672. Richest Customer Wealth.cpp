class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxprice = 0;
        for(int i = 0; i < accounts.size(); i++){
            int price = 0; 
            for(int j = 0; j < accounts[0].size(); j++){
                price+=accounts[i][j];
            }
            maxprice = max(maxprice, price);
        }
        return maxprice;
    }
};
