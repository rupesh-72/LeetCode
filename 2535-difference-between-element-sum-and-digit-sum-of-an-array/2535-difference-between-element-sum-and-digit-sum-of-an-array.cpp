class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        for(int i = 0; i < nums.size(); i++)
            elementSum += nums[i];
        for(auto digit : nums)
        {
            while(digit != 0)
            {
                digitSum += digit % 10;
                digit = digit / 10;
            }
        }
        return abs(elementSum - digitSum);
    }
};