class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        vector<int> pcnt(26, 0);
        vector<int> scnt(26, 0);
        for(int i = 0; i < p.size(); i++) {
            pcnt[p[i] - 'a']++;
        }
        int left = 0, right = 0;
        while(right < s.size()) {
            scnt[s[right] - 'a']++;
            if(right - left + 1 > p.size()) {
                scnt[s[left] - 'a']--;
                left++;
            }
            if(right - left + 1 == p.size()) {
                if(pcnt == scnt) {
                    res.push_back(left);
                }
            }
            right++;
        }
        return res;
    }
};