class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        
        // The below loop stores ["eat","tea","tan","ate","nat","bat"] in map
        // aet -> eat, tea, ate
        // ant -> tan, nat
        // abt -> bat
        for(int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(s);
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++)
            ans.push_back(it->second);
        return ans;
    }
};