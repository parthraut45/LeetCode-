class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int one = 0;
        int zero = 0;
        for(int i = 0 ; i < students.size() ; i++){
            if(students[i] == 1) one++;
            else zero++;  
        }
        for(int i = 0 ; i < sandwiches.size() ; i++){
            if(sandwiches[i] == 1){
            if(one > 0) one--;
            else break;
            }
            if(sandwiches[i] == 0){
            if(zero > 0) zero--;
            else break;
            }
        }
        return one + zero;
    }
};