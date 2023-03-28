class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1;)
        {
            if(nums[i] == nums[i+1])
            {
                res.push_back(nums[i]);
                i += 2;
            }
            else
                i++;
        }
        return res;
    }
};