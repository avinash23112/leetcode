class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // for(int i=0;i<haystack.size();i++){
            
        //     for (int len = 1; len <= haystack.size() - i; len++){
        //         if(haystack.substr(i, len) == needle ) 
        //             return i;
        //     }
        // }
        // return -1;



        return haystack.find(needle);


        // size_t found = haystack.find(needle);
        // return found;

        // auto it = haystack.find(needle);
        // if(it!=string::npos){
        //     return it;
        // }
        // return -1;
    }
};