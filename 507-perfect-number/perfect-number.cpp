class Solution {
public:
    bool checkPerfectNumber(int num) {
        int num1=num;
        int sum=0;
        for(int i=1;i<num;i++){
            if(num1%i==0) sum=sum+i;
        }
        if(sum==num)
            return 1;
        else 
            return 0;
        
    }
};