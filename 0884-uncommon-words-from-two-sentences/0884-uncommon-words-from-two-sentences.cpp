// class Solution {
// public:
//     vector<string> uncommonFromSentences(string s1, string s2) {
//         unordered_map<string, int> mp;
//         vector<string> res;
        
//         istringstream str1(s1);
//         string word;
//         while(str1 >> word) 
//             mp[word]++;
        
//         istringstream str2(s2);
//         while(str2 >> word) 
//             mp[word]++;
        
//         for(auto it = mp.begin(); it != mp.end(); it++)
//         {
//             if(it->second == 1)
//                 res.push_back(it->first);
//         }
//         return res;
//     }
// };

// Optimized Approach
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> res;
        string temp;
        for(auto ch : s1)
        {
            if(ch != ' ')
                temp.push_back(ch);
            else
            {
                mp[temp]++;
                temp = "";
            }
        }
        mp[temp]++; // inserting last word of string
        temp = ""; // empty temp
               
        for(auto ch : s2)
        {
            if(ch != ' ')
                temp.push_back(ch);
            else
            {
                mp[temp]++;
                temp = "";
            }
        }
        mp[temp]++; // inserting last word of string
        
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second == 1)
                res.push_back(it->first);
        }
        return res;
    }
};