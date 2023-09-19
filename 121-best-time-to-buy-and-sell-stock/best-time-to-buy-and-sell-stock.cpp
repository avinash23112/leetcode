class Solution {
public:
    int maxProfit(vector<int>& p) {
        int minimum=p[0];
        int max_profit=0;

        for(int i=0;i<p.size();i++){
            minimum=min(p[i],minimum);
            int profit=p[i]-minimum;
            max_profit=max(profit,max_profit);


        }
        return max_profit;













    //TLE
    // int maxProfit(vector<int>& p) {
    //     int max=INT_MIN;
    //     for(int i=0;i<p.size();i++){
    //         for(int j=i;j<p.size();j++){
    //             if(p[j]-p[i]>max){
    //                 max=p[j]-p[i];
    //             }
    //         }
    //     }
    //     if(max>0)
    //         return max;
    //     else    
    //         return 0;
        
        
        
        
        
        
        
        
        //wrong
        // int min=INT_MAX;
        // int minidx;

        // for(int i=0;i<p.size();i++){
        //     if (p[i]<min){
        //         min=p[i];
        //         minidx=i;
        //     }            
        // }
        // int max=INT_MIN;
        // int maxidx;
        // for(int i=minidx;i<p.size();i++){
        //     if(p[i]>max){
        //         max=p[i];
        //         maxidx=i;
        //     }
        // }
        // int profit=max-min;
        // if(profit>0)
        //     return profit;
        // else
        //     return 0;














        //wrong
        // auto min =min_element(prices.begin(),prices.end());
        // auto minidx=distance(prices.begin(),min);

        // auto max=max_element(prices.begin()+minidx,prices.end());

        // int profit=max-min;
        // cout<<minidx;
        
        // if(profit>0)
        //     return profit;
        // else
        //     return 0;

    }
};