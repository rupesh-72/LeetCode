// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i = 0; i < nums.size(); i++)
//             mp[nums[i]]++;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(mp[nums[i]] == 1)
//                 return nums[i];
//         }
//         return 0;
//     }
// };

// optimized approach using Bit Manipulation
// Tutorial - https://www.youtube.com/watch?v=Nt920vgqXyE
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < 32; i++)
        {   
            int count1 = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if((1 << i) & nums[j])
                    count1++;
            }
            
            if(count1 % 3 == 1)
                ans = ans | (1 << i);
        }
        return ans;
    }
};