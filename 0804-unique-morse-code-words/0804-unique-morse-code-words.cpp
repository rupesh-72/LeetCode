class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> hash = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                                ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                                "...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> morse;
        
        for(int i = 0; i < words.size(); i++)
        {
            string temp = "";
            for(int j = 0; j < words[i].size(); j++)
            {
                temp += hash[words[i][j] - 'a'];
            }
            morse.insert(temp);
        }
        return morse.size();
    }
};