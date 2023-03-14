class Solution {
public:
    char findTheDifference(string s, string t) {
        // performing XOR operation
        char c = 0;
        for(auto ch_s : s)
            c ^= ch_s;
        for(auto ch_t : t)
            c ^= ch_t;
        return c;
    }
};