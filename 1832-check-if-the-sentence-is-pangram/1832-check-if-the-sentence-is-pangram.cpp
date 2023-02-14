class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> str;
        for(int i = 0; i < sentence.size(); i++)
        {
            str.insert(sentence[i]);
        }
        
        if(str.size() == 26)
            return true;
        else
            return false;
    }
};