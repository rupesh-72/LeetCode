// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         vector<int> res;
//         int val;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             val = nums[i] * nums[i];
//             res.push_back(val);
//         }
//         sort(res.begin(), res.end());
//         return res;
//     }
// };

// Optimized Approach O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l = 0;
        int r = nums.size() - 1;
        
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            if(abs(nums[r]) > abs(nums[l]))
            {
                res[i] = nums[r] * nums[r];
                r--;
            }
            else
            {
                res[i] = nums[l] * nums[l];
                l++;
            }
        }
        return res;
    }
};