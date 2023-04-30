class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto ch : tokens)
        {   
            int val1,val2;
            if(ch == "+")
            {
                val1 = st.top();
                st.pop();
                val2 = st.top();
                st.pop();
                
                st.push(val2+val1);
            }
            
            else if(ch == "-")
            {
                val1 = st.top();
                st.pop();
                val2 = st.top();
                st.pop();
                
                st.push(val2-val1); // always perform operation from val2 to val1
            }
            else if(ch == "*")
            {
                val1 = st.top();
                st.pop();
                val2 = st.top();
                st.pop();
                
                st.push(val2*val1);
            }
            else if(ch == "/")
            {
                val1 = st.top();
                st.pop();
                val2 = st.top();
                st.pop();
                
                st.push(val2/val1);
            }
            else
                st.push(stoi(ch)); // stoi is string to integer function
        }
        return st.top();
    }
};