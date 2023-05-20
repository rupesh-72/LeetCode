class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        for(int i = 0; i < path.length(); i++)
        {
            if(path[i] == '/')
                continue;
            string temp;
            while(i < path.length() && path[i] != '/'){
                  temp += path[i];
                  i++;
            }
            
            if(temp == ".")
                continue;
            if(temp == ".."){
                if(!st.empty())
                    st.pop();
            }
            else
                st.push(temp);
        }
       
        if(st.empty())
            return "/";
        string ans;
        while(!st.empty()){
            ans = "/" + st.top() + ans;
            st.pop();
        }
        return ans;
    }
};