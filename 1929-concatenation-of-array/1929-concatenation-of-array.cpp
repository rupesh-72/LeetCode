class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        for(int i = 0; i < n; i++)
            ans.push_back(nums[i]);
        
        int m = 2*n;
        for(int i = n; i < m; i++)
            ans.push_back(nums[i-n]);
        return ans;
    }
};