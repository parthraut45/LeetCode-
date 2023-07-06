class Solution {
public:
    int xorOperation(int n, int start) {
        if(n==0){
            return 0;
        }
        int ex = 0;
        for(int i = 0; i < n; i++){
            ex ^= start + i*2;;
        }
        return ex;
    }
};
