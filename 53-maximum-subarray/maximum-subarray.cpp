class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //  int n = nums.size();
        // int currSum = 0, maximumSumSubarray = INT_MIN;
        // for(auto num : nums){
        //     currSum += num;
        //     if(currSum > maximumSumSubarray){
        //         maximumSumSubarray = currSum;
        //     }
        //     if(currSum < 0){
        //         currSum = 0;
        //     }
        // }
        // return maximumSumSubarray;


        int n=nums.size();
        int ans=INT_MIN;
        int sum=0;
        for (auto i:nums){
                    
            
                    sum=sum + i;
                    if(sum>ans)
                        ans=sum; 
                    if(sum<0)
                        sum=0;
        }     
        
        return ans;

        //TLE
        // int n=nums.size();
        // int ans=INT_MIN;
        // for (int i=0;i<n;i++){
            
        //     for(int j=i;j<n;j++){
        //         int sum=0;
        //         for(int k=i;k<=j;k++){
        //             sum=sum + nums[k]; 
        //         }
        //         if(sum>ans)
        //             ans=sum;
        //     }     
        // }
        // return ans;
    }

};