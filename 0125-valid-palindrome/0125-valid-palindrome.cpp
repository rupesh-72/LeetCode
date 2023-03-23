class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string palindrome;
        for(int i = 0; i < s.size(); i++)
        {   
            // taking ASCII values of a-z and 0-9
            if(int(s[i]) >= 97 && int(s[i]) <= 122 || ( int(s[i]) >= 48 && int(s[i]) <= 57))
                palindrome.push_back(s[i]);
        }
        
        int n = palindrome.size();
        for(int i = 0; i < n; i++)
        {   
            if(palindrome[i] != palindrome[n - i - 1])
                return false;     
        }
        return true;
    }
};