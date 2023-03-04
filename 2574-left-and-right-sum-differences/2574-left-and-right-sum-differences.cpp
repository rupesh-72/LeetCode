class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;
        
        // calculating left sum array
        int lsum = 0;
        leftSum.push_back(0);
        for(int i = 0; i < nums.size() - 1; i++)
        {
            lsum += nums[i];
            leftSum.push_back(lsum);
        }
        
        // calculating right sum array
        int rsum = 0;
        rightSum.push_back(0);
        for(int i = nums.size() - 1; i > 0; i--)
        {
            rsum += nums[i];
            rightSum.push_back(rsum);
        }
        reverse(rightSum.begin(), rightSum.end());
        
        // finding the difference
        vector<int> res;
        int diff;
        for(int i = 0; i < leftSum.size(); i++)
        {
            diff = abs(leftSum[i] - rightSum[i]);
            res.push_back(diff);
        }
        return res;
    }
};