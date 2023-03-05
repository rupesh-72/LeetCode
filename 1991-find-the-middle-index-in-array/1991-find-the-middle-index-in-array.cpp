class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        
        int currSum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(currSum == sum - currSum - nums[i])
                return i;
            currSum += nums[i];
        }
        return -1;
    }
};

// Tutorial - https://www.youtube.com/watch?v=zh_ZvGBdKbY