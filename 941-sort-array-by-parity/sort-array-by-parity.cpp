class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        //copied
        // Use std::partition to rearrange elements
        std::partition(nums.begin(), nums.end(), [](int num) {
            return num % 2 == 0; // Place even numbers before odd numbers
        });

        return nums;
    }
};
