class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            mp[nums[i]]++;
        for(auto val : nums)
        {
            if(mp[val] > n/2)
                return val;
        }
        return 0;
    }
};