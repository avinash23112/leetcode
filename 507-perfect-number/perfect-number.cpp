class Solution {
public:
    bool checkPerfectNumber(int num) {
        int num1=num;
        int sum=1;
        if(num==1) return 0;

        for(int i=2;i<=(num)/2;i++){
            if(num1%(i)==0) sum=sum+i;
        }
        if(sum==num)
            return 1;
        else 
            return 0;


        // int s=1;
        // if(num==1) return false;
        // for(int i=2;i<=sqrt(num);i++){
        //     if(num%i==0){
        //         if(num/i==i){
        //           s=s+i;
        //         }
        //         else{
        //             s=s+i+(num/i);
        //         }
        //     }
        // }

        // return s==num;
        
    }
};