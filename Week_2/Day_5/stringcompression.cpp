class Solution {
public:
    int compress(vector<char>& chars) {
        int left = 0, right = 0, cnt = 0;
        int n = chars.size();
        string ans = "";
        while(right < n){
            if(chars[right] != chars[left]){
                ans.push_back(chars[left]);
                if(cnt > 1)
                    ans += to_string(cnt);
                left = right;
                cnt = 0;
            }
            cnt++;
            right++;
        }
        ans.push_back(chars[left]);
        if(cnt > 1)
            ans += to_string(cnt);
        for(int i = 0; i < ans.size(); i++){
            chars[i] = ans[i];
        }
        return ans.size();
    }
};