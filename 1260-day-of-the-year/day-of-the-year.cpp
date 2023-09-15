class Solution {
public:
    bool isleap(int year){
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
            return 1;
        } 
        else
            return 0;
    }

    int dayOfYear(string date) {
        int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

        int year =stoi( date.substr(0,4));
        int month = stoi( date.substr(5,2));
        
        if (isleap(year) ) { 
            arr[2]=29;
        }
        int dayinmonth ;
        int dayno = stoi(date.substr(8,2));
        int ans=0;
        for(int i=0;i<month;i++){
            ans = arr[i] + ans;
        }
        ans= ans+dayno;
        cout<<dayinmonth<<" "<<dayno;
        
        return ans;
    }
    
};