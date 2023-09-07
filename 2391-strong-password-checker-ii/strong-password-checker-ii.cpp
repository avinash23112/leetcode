class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int small=0,cap=0,num=0,spe=0;
        if(password.length() <8 )
            return 0;
        for(int i=0;i<password.length();i++){
            char ch =password[i];
            if(ch>='a'&& ch <='z'  )
                small++;
            if(ch>='A'&& ch <='Z')
                cap++;
            if(ch>='0'&& ch <='9')
                num++;
            if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'||ch=='('||ch==')'||ch=='-'||ch=='+')  
                spe++; 
            if(password[i]==password[i+1] && i!=password.length()-1)
                return 0;
        
        }
        cout <<spe;
        if (small >=1 && cap >=1 && num >= 1 && spe >= 1)
            return 1;
        
        return 0;

        
    }
};
