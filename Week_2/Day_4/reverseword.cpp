class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i=0, j=0;
        while(j <= n) {
            if(s[j] == ' ' || j == n) {
                int temp = j-1;
                while(i < temp) {
                    swap(s[i], s[temp]);
                    i++;
                    temp--;
                }
                j++;
                i = j;
            }
            else j++;
        }
        return s;
    }
};