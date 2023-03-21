class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> res;
        
        istringstream str1(s1);
        string word;
        while(str1 >> word) 
            mp[word]++;
        
        istringstream str2(s2);
        while(str2 >> word) 
            mp[word]++;
        
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second == 1)
                res.push_back(it->first);
        }
        return res;
    }
};