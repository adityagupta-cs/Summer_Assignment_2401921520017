class Solution {
    vector<int> findpse(vector<int> &heights){
        int n=heights.size();
        vector<int> psee(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            int curr=heights[i];
            while(!st.empty() && heights[st.top()]>=curr){
                st.pop();
            }
            psee[i]=!st.empty()?st.top():-1;
            st.push(i);
        }
        return psee;
    }
    vector<int> findnse(vector<int> &heights){
        int n=heights.size();
        vector<int> nse(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            int curr=heights[i];
            while(!st.empty() && heights[st.top()]>=curr){
                st.pop();
            }
            nse[i]=!st.empty()?st.top():n;
            st.push(i);
        }
        return nse;
    }
    
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>nse=findnse(heights);
        vector<int>pse=findpse(heights);
        int area=0;
        int a;
        for(int i=0;i<heights.size();i++){
            a=heights[i]*(nse[i]-pse[i]-1);
            area=max(area,a);
        }
        return area;
    }
};