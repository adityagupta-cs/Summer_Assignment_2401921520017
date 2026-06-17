class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num1, vector<int>& num2) {
        
        unordered_map<int, int> nextGreater; 
        stack<int> st; 
        for(int i = num2.size() - 1; i >= 0; i--) {
            int current = num2[i];
            while(!st.empty() && st.top() <= current) {
                st.pop();
            }
            if(st.empty()) {
                nextGreater[current] = -1;
            } else {
                nextGreater[current] = st.top();
            }
            st.push(current);
        }
        vector<int> result;
        for(int i = 0; i < num1.size(); i++) {
            result.push_back(nextGreater[num1[i]]);
        }
        
        return result;
    }
};