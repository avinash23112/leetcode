class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n =nums.size();
        // unordered_map<int,int>map;
        // for(int i=0;i<n;i++){
        //     map[nums[i]]++;
        // }
        // for (auto i:map){
        //     if (i.second>n/2)
        //         return i.first;
        // }
        // return -1;
        
        sort(nums.begin(),nums.end());
        return nums[(int)nums.size()/2];  
    }
};