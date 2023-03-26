class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int sum, ans, diff = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            int left = i+1;
            int right = nums.size()-1;
            while(left < right)
            {
                sum = nums[i] + nums[left] + nums[right];
                if(abs(target - sum) < diff)
                {
                    ans = sum;
                    diff = abs(target - sum);
                }
                if(target == sum)
                    return sum;
                else if(target < sum)
                    right--;
                else
                    left++;
            }
        }
        return ans;
    }
};
// Tutorial - https://www.youtube.com/watch?v=sJsrqcfaM38