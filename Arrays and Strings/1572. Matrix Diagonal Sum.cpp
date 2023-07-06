class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat.size(); j++){
                if(i==j){
                    sum+=mat[i][j];
                }
                if(i == mat.size() - j - 1){
                    sum+=mat[i][j];
                }
            }
        }
        if(mat.size() % 2 != 0){
            sum-=mat[mat.size()/2][mat.size()/2];
        }
        return sum;
    }
};
