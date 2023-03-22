// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         unordered_set<int> s;
//         for(int i = 0; i < nums.size(); i++)
//             s.insert(nums[i]);
//         for(int i = 0; i <= nums.size(); i++)
//         {
//             if(s.find(i) == s.end())
//                 return i;
//         }
//         return -1;
//     }
// };

// Optimized Approach Space O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int actualSum = 0;
        for(int i = 0; i <= nums.size(); i++)
            sum += i;
        
        for(int i = 0; i < nums.size(); i++)
            actualSum += nums[i];
        
        return sum - actualSum;
    }
};
