class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<int>v;
        for (auto i:map){
            if (i.second>nums.size()/3)
                v.push_back(i.first);
        }
        return v;
    }
};