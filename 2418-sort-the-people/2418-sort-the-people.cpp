class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        vector<pair<int,string>> a;
        
        for(int i = 0; i < n; i++)
            a.push_back({heights[i], names[i]});
        sort(a.rbegin(), a.rend());
        
        for(int i = 0; i < n; i++)
            names[i] = a[i].second;
        
        return names;
    }
};