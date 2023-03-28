// Time - O(nlogn), Space - O(1)
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> res;
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i < nums.size() - 1;)
//         {
//             if(nums[i] == nums[i+1])
//             {
//                 res.push_back(nums[i]);
//                 i += 2;
//             }
//             else
//                 i++;
//         }
//         return res;
//     }
// };

// Optimized Approach Time - O(n) & Space O(1)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int idx;
        for(int i = 0; i < nums.size(); i++)
        {
            idx = abs(nums[i]) - 1;
            if(nums[idx] > 0)
                nums[idx] = -nums[idx];
            else
                res.push_back(abs(nums[i]));
        }
        return res;
    }
};
// https://www.youtube.com/watch?v=ACYunkWQnSI