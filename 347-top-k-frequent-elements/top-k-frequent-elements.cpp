class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>map;
        for(int i=0;i<nums.size();i++)
            map[nums[i]]++;

        vector<int>res;

        int maxfreq=INT_MIN;
        int maxnum;
        int i=0;
        while(i<k){
            for(auto x:map){
                if(x.second>maxfreq){
                    maxfreq=x.second;
                    maxnum=x.first;
                }
                
            }
            res.push_back(maxnum);
            map.erase(maxnum);
            maxfreq=INT_MIN;
            i++;
           
        }
        return res;





        //wrong 
        // map<int,int,greater<int>>rmap;
        // for(int i=0;i<nums.size();i++){
        //     rmap[nums[i]]++;
        // }
        // vector<int>v;
        // for(auto i:rmap){
        //     cout<<i.first<<" "<<i.second<<endl;
        //     if (k>0){
        //         v.push_back(i.second);
        //         k--;
                
        //     }

        // }

        // // for(int i=0;i<n;i++){
        // //     if(rmap.find()!=rmap.end()){
                
        // //     }
        // // }


        // return v;


        // // vector<int>v;
        // // sort(nums.begin(),nums.end());
        // // int count=0;
        // // for (int i=nums.size();i>0;i--){
        // //     if(nums[i]!=nums[i-1] && count<=k){
        // //         v.push_back(nums[i]);
        // //         count++;
        // //     }

        // // }
        // // return v;
    }
};