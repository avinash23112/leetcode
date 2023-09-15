class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        map<int,int>map;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                map[nums[i]]++;
        }
        
        int maxfre=INT_MIN;
        int maxnum;
        int smallmaxfre,smallmaxnum;
        
        for(auto i:map){
            if(i.first%2==0){
                
                if(i.second >= maxfre ){
                    if(i.second!=maxfre){
                        smallmaxfre=i.second;
                        smallmaxnum = i.first;
                    }
                    maxfre = i.second;
                    maxnum = i.first;
                    cout<<maxnum<<" "<<maxfre<<endl; //print
                }
                
            }
            
        }
        cout<<maxnum;//print
        
        if (smallmaxfre==maxfre)
            return smallmaxnum;
        if (maxfre>smallmaxfre)
            return maxnum;
        
        return -1;
    }
};