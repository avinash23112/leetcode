class Solution {
public:
    int fib(int n) {
        vector<int>v(n+1);
        if(n==0)
            return n;
        else if(n==1)
            return n;
        v[0]=0;
        v[1]=1;
        
        for(int i=2;i<=n;i++){
            v[i]=v[i-1]+v[i-2];
        }
        
        int ans =v[n];
        return ans;

        
    }
};