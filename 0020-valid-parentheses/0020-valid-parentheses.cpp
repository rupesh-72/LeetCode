class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            else if(st.empty()) // if first bracket is closing then return false
                return false;
            else
            {
                if(st.top() == '(' && s[i] == ')')
                    st.pop();
                else if(st.top() == '{' && s[i] == '}')
                    st.pop();
                else if(st.top() == '[' && s[i] == ']')
                    st.pop();
                else
                    return false; // if not mathches means it is not valid e.g "(])"
            } 
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};