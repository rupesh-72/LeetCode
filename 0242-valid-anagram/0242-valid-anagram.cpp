class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> mp;
        if(s.size() != t.size())
            return false;
        
        for(int i = 0; i < s.size(); i++) // inserting into map
            mp[s[i]]++;
        
        for(int i = 0; i < t.size(); i++)
        {   
            if(mp.find(t[i]) == mp.end())
                return false;
            else
                mp[t[i]]--; // decrementing count if found
        }
        
        for(int i = 0; i < mp.size(); i++)
        {
            if(mp[i] < 0) // if count of any value is < 0 then false
                return false;
        }
        return true;
    }
};