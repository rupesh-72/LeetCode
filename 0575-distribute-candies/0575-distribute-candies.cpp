class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;
        for(int i = 0; i < candyType.size(); i++)
            s.insert(candyType[i]);
        int sSize = s.size();
        if(sSize > candyType.size() / 2)
            return candyType.size() / 2;
        else
            return sSize;
    }
};