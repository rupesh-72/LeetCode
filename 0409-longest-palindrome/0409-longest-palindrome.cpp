class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int oddCount = 0;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            if(mp[s[i]] % 2 == 1)
                oddCount++;
            else
                oddCount--;
        }
        if(oddCount > 1)
            return s.length() - oddCount + 1;
        return s.length();
    }
};