class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if(st.empty() && ch == '#')
                continue;
            if(!st.empty() && ch == '#')
                st.pop();
            else
                st.push(ch);
        }
        
        string s1;
        while(!st.empty())
        {
            s1 += st.top();
            st.pop();
        }
        
        for(int i = 0; i < t.length(); i++)
        {
            char ch = t[i];
            if(st.empty() && ch == '#')
                continue;
            if(!st.empty() && ch == '#')
                st.pop();
            else
                st.push(ch);
        }
        
        string t1;
        while(!st.empty())
        {
            t1 += st.top();
            st.pop();
        }
        
        if(s1 == t1)
            return true;
        else
            return false;
    }
};