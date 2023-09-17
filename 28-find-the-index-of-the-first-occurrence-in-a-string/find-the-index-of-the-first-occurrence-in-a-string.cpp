class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i=0;i<haystack.size();i++){
            
            for (int len = 1; len <= haystack.size() - i; len++){
                if(haystack.substr(i, len) == needle ) 
                    return i;
            }
        }
        return -1;
    }
};