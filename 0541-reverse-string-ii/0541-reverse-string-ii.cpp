class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i = 0; i < s.size(); i += 2*k)
        {
            if(n - i < k)
                reverse(s.begin() + i, s.end());
            else
                reverse(s.begin() + i, s.begin() + i + k); 
        }
        return s;
    }
};

// Tutorial - https://www.youtube.com/watch?v=MsILW2nf5YE