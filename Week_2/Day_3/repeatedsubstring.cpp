class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                string pattern="";
                int time=n/i;
                string ans=s.substr(0,i);
                for(int j=0;j<time;j++){
                    pattern+=ans;
                }
                if(pattern==s) return true;
            }
        }
        return false;
    }
};