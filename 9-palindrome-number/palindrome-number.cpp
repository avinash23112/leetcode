class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        long ans=0;
        int ld;
        while(n>0){
            ld=n%10;
            ans=10*ans+ld;
            n=n/10;
        }
        if(ans==x)
            return 1;
        else 
            return 0;
        
    }
};