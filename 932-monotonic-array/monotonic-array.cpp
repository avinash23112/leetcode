class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n =nums.size();
        int counti=0;
        int countd=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1])
                counti++;
            if(nums[i]>=nums[i+1])
                countd++;
        }
        if(counti==n-1 || countd==n-1)
            return 1;
        else
            return 0;

        
    }
};