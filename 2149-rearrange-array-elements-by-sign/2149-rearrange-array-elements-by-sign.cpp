class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> negative;
        vector<int> positive;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < 0)
                negative.push_back(nums[i]);
            else
                positive.push_back(nums[i]);
        }
        
        for(int i = 0; i < positive.size(); i++)
        {
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
        }
        return ans;
    }
};

// can be optimized by using only O(1) space using two pointer approach
// positive index start with 0 and negative with 1 and insert positive element at positive index and increase it by 2 similarly with the negative element