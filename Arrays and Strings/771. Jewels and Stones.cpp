class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        char str;
        int ctr=0;
        for(int i = 0; i < jewels.size(); i++){
            str=jewels[i];
            for(int j = 0;j < stones.size(); j++){
                if(str == stones[j]){
                    ctr++;
                }
            }
        }
        return ctr;
    }
};
