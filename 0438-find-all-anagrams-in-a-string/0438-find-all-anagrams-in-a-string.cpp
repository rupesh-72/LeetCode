class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.length();
        vector<int> ans;
        
        map<char, int> p_mp;
        map<char,int> s_mp;
        for(char ch = 'a'; ch <= 'z'; ch++){ // inserting 26 alphabhets into both maps
            p_mp[ch] = 0;
            s_mp[ch] = 0;
        }
        
        for(int i = 0; i < p.length(); i++){ //inserting anagram p to check in s if it exist
            p_mp[p[i]]++;
        }
        
        int i = 0, j = 0;
        while(j < s.length()){
            s_mp[s[j]]++;
            if(j-i+1 < k) // creating window
                j++;
            else if(j-i+1 == k){
                if(s_mp == p_mp) // comparing both maps
                    ans.push_back(i);
                s_mp[s[i]]--;
                i++,j++;
            }
        }
        return ans;
    }
};