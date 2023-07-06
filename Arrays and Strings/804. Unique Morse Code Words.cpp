class Solution {
public:
int uniqueMorseRepresentations(vector<string>& words) {
  	vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_map<string,int> mp;
  	for (int i=0; i< words.size(); i++){
  		string st;
  		for (int j=0; j<words[i].size(); j++){
            st += morse[words[i][j] - 'a'];
          }
  		mp[st]=1;
  	}
    return mp.size();
    }
};
