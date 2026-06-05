class Solution {
public:
    bool isPalindrome(string s) {
        string res;
         for (char c : s){
            if(isalnum(c)){
                res += tolower(c);
            }
        }
        int j=0;
        int e=res.size()-1;
        while(j<e){
            if(res[j] != res[e]){
                return false;
            }
            j++;
            e--;
        }
        return true;
    }
};