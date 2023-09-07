class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for  (int i=0;i<s.length();i++){
            if (isalnum(s[i])){
                temp+=tolower(s[i]);
            }
        }
        string temp2=temp;
        reverse(temp.begin(),temp.end());
        if (temp2==temp)
            return 1;
        else    
            return 0;
        




    //    int start=0;
    //    int end=s.size()-1;
    //    while(start<=end){
    //        if(!isalnum(s[start])){start++; continue;}
    //        if(!isalnum(s[end])){end--;continue;}
    //        if(tolower(s[start])!=tolower(s[end]))return false;
    //        else{
    //            start++;
    //            end--;
    //        }
    //    }
    //    return true;


    // bool check(string temp){
    //     int i=0,j=temp.size()-1;
    //     while(i<j){
    //         if(temp[i++]!=temp[j--]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    // // bool checkRecursive(string s,int left,int right){
    // //     if(left>=right){
    // //         return true;
    // //     }
    // //     return s[left]==s[right] && checkRecursive(s,left+1,right-1);
    // // }
    // bool isPalindrome(string s) {
    //     string temp="";
    //     for(int i=0;i<s.size();i++){
    //         if(isalnum(s[i])){
    //             temp+=tolower(s[i]);
    //         }
    //     }
    //     return check(temp);
    //     // return checkRecursive(temp,0,temp.size()-1);
}
};