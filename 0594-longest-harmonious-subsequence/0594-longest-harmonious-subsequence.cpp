class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        int lhs = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum = 0;
            if(mp[nums[i] + 1])
                sum = mp[nums[i]] + mp[nums[i] + 1];
            lhs = max(lhs,sum);
        }
        return lhs;
    }
};
// Tutorial - https://www.youtube.com/watch?v=5g4Kn9pkKlM