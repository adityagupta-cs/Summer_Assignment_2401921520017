class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int> st;
        for(int i=0;i<n;i++){
                if(tokens[i] != "+" &&
                   tokens[i] != "-" &&
                   tokens[i] != "*" &&
                   tokens[i] != "/"){
                        st.push(stoi(tokens[i]));
            }
            else{
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                int res;
                if(tokens[i]=="+"){
                    res=a+b;
                    st.push(res);
                }
                if(tokens[i]=="-"){
                    res=a-b;
                    st.push(res);
                }
                if(tokens[i]=="*"){
                    res=a*b;
                    st.push(res);
                }
                if(tokens[i]=="/"){
                    res=a/b;
                    st.push(res);
                }
            }
        }
        return st.top();
    }
};