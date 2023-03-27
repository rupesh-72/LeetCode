class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0, fast = 0;
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
            
        slow = 0;
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
// Tutorial - https://www.youtube.com/watch?v=_n5MR8IxR6c