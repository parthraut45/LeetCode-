class Solution {
    public:
        vector<string> findRelativeRanks(vector<int>& score){
            vector<int>total = score;
            sort(total.begin() , total.end() , greater<int>());
            vector<string> medal = {"Gold Medal" , "Silver Medal" , "Bronze Medal"};
            vector<string> answer;
            unordered_map<int , string> rank;
            for(int i = 0 ; i < total.size() ; i++){
                if(i < 3){
                    rank[total[i]] = medal[i];
                }
                else{
                    rank[total[i]] = to_string(i + 1);
                }
            }

            for(int i : score){
                answer.push_back(rank[i]);
            }
            return answer;
        }
};