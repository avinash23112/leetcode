class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return 1;
        
        return 0;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            if(isvowel(words[i][0]) && isvowel(words[i][words[i].length()-1]) )
                count ++; 
        }
        return count;
    }
};
