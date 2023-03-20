class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second == 2)
                res.push_back(it->first);
        }
        
        for(int i = 1; i <= nums.size(); i++)
        {
            if(mp.find(i) == mp.end())
                res.push_back(i);
        }
        return res;
    }
};