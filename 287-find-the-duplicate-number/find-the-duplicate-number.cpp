class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)
            map[nums[i]]++;
        for(auto i:map){
            if(i.second!=1)
                ans=i.first;
        }
        return ans;




        //TLE for huge numbers
        // for (int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //     if(nums[i]==nums[j] && i!=j )
        //         return nums[i];
            
        //     }
        // }
        // return -1; 
        
    }
};