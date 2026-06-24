class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int left=0,right=0,maxlen=0;
        int n=s.size();
        while(right<n){
            if(!mp.count(s[right])){
                mp[s[right]]=right;     
            }
            else{
                left=max(left,mp[s[right]]+1);
                mp[s[right]]=right;         
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};