class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res;
        int maxVal;
        for(int i = 1; i < arr.size(); i++)
        {
            maxVal = *max_element(arr.begin() + i, arr.end());
            res.push_back(maxVal);
        }
        res.push_back(-1);
        
        return res;
    }
};