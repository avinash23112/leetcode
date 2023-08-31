class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> freqMap; // Changed variable name to freqMap
    for (int i = 0; i < nums.size(); i++)
        freqMap[nums[i]]++;

    int j = 0;
    for (const auto& pair : freqMap) {
        nums[j++] = pair.first; // Using pair.first to get the unique elements
    }
    return freqMap.size(); // Returning the number of unique elements    


        // map<int,int>map;
        // for(int i=0;i<nums.size();i++)
        //     map[nums[i]]++;
        // int j=0;
        // int n=map.size();
        // for(int i=0;i<n;i++){
        //     nums[j++]=i.first;
        // }
        // return nums.size();




        // //correct
        // vector<int>v;
        // int n=nums.size();
        // // if(n==1)
        // //     return n;
        // for(int i=0;i<n-1;i++){
        //     if(nums[i]!=nums[i+1] ){
        //         v.push_back(nums[i]);
        //     }
        // }
        // v.push_back(nums[n - 1]);
        // nums=v;
        // return v.size();






        // //correct using set
        // set<int>set;
        // for(int i=0;i<nums.size();i++){
        //     set.insert(nums[i]);
        // }
        // int i=0;
        // for(auto x:set){
        //     nums[i]=x;     //not nums[i]=set[x];
        //     i++;
        // }

        
        // return set.size();
    }
};