class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int val;
        for(int i = 0; i < nums.size(); i++)
        {
            val = nums[i] * nums[i];
            res.push_back(val);
        }
        sort(res.begin(), res.end());
        return res;
    }
};