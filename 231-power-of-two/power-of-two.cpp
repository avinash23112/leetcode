class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i =0;i<=log(n)/log(2);i++)
        {
            int ans = pow(2,i);
            if(ans==n)
            return true;
            
        }
        return false;






    //   return n > 0 && not (n & n - 1);
    
        
    }
};