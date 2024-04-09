class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        // int time = 0;
        // int count = 0;
        // for(int i = 0 ; i < tickets.size() ; i++){
        //     if(tickets[i] > 0){
        //         time++
        //     }
        //     else 
        // }
    //     int time =0;
    //     while(true) {
    //         for(int i=0;i< tickets.size();i++) {
    //             if(tickets[i]>0) {
    //                 tickets[i]=v[i]-1;
    //                 t++;
    //             }
    //             if(i==k && tickets[i]==0)
    //                 return time;
    //         }
    //     }
    //     return 0;
    // }

        int time = 0;
        int i = 0;
        int n = tickets.size(); 
        while(tickets[k] > 0) {
            if(tickets[i] > 0) {
                tickets[i]--;
                time++;
            }
            i = (i + 1) % n;
        }

        return time;
    }
};