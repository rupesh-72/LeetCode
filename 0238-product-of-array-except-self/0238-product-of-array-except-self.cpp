class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftProduct[nums.size()];
        int rightProduct[nums.size()];
        vector<int> res;
        
        int lMul = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            lMul *= nums[i];
            leftProduct[i] = lMul;
        }
        
        int rMul = 1;
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            rMul *= nums[i];
            rightProduct[i] = rMul;
        }
        
        res.push_back(rightProduct[1]);
        for(int i = 1; i < nums.size() - 1; i++)
        {
            int temp = leftProduct[i - 1] * rightProduct[i + 1];
            res.push_back(temp);
        }
        res.push_back(leftProduct[nums.size() - 2]);
        
        return res;
    }
};

// Tutorial - https://www.youtube.com/watch?v=gREVHiZjXeQ