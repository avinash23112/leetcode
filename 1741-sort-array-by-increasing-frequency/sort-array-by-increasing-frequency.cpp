class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>v;
        map<int,int,greater<int>>map;

        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        int j=1;
        while(j<=nums.size()){
        for(auto i:map){
            if(i.second==j){
                for(int k=0;k<j;k++)
                {
                    v.push_back(i.first);
                }
            }
        }
        j++;
        }
        return v;
    }
};