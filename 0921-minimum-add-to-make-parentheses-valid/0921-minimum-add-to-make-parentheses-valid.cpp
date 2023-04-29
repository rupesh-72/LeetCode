class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0;
        stack<char> st;
        
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if(!st.empty() && st.top() == '(' && ch == ')')
            {
                st.pop();
                ans--;
            }
            else
            {
                st.push(ch);
                ans++;
            }
        }
        return ans;
    }
};