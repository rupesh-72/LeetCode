class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int leftSum = 0;
        int rightSum = 0;
        int current;
        
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
        }
        
        for(int i = 0; i < nums.size(); i++){
            current = nums[i];
            rightSum = total - leftSum - current;
            if(leftSum == rightSum)
                return i;
            leftSum += nums[i];
        }
        return -1;
    }
};