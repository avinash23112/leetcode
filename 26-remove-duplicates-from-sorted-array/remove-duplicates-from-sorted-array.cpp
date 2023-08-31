class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


























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







        set<int>set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        int i=0;
        for(auto x:set){
            nums[i]=x;
            i++;
        }

        
        return set.size();
    }
};