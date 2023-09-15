class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        map<int,int> mp;
        for( int i : nums) {
            if(i%2 == 0) {
                mp[i]++;
            }
        }

        int ans = -1, max = 0;
        for( auto i: mp) {
            if(i.second > max) {
                max = i.second;
                ans = i.first;
            }
            
        }
        return ans;
    }
};