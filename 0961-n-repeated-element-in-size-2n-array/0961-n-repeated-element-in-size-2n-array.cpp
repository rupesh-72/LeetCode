class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second == n)
                return it->first;
        }
        return -1;
    }
};