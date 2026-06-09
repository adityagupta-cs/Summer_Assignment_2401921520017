class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> pcnt(26, 0);
        vector<int> scnt(26, 0);
        for(int i = 0; i < s1.size(); i++) {
            pcnt[s1[i] - 'a']++;
        }
        int left = 0, right = 0;
        while(right < s2.size()) {
            scnt[s2[right] - 'a']++;
            if(right - left + 1 > s1.size()) {
                scnt[s2[left] - 'a']--;
                left++;
            }
            if(right - left + 1 == s1.size()) {
                if(pcnt == scnt) {
                    return true;
                }
            }
            right++;
        }
        return false;
    }
};