class Solution {
public:
    bool checkRecord(string s) {
        int A_count = 0;
        if(s.size() > 2)
        {
            for(int i = 0; i < s.size() - 2; i++)
            {
                if(s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L')
                    return false;
            }
        }
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'A')
                A_count++;
        }
        
        if(A_count >= 2)
            return false;
        return true;
    }
};