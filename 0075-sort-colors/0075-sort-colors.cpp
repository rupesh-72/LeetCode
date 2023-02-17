class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
                zero++;
            else if(nums[i] == 1)
                one++;
            else
                two++;
        }
        
        for(int i = 0; i < zero; i++)
            nums[i] = 0;
        
        for(int i = zero; i < zero + one; i++)
            nums[i] = 1;
        
        for(int i = zero + one; i < nums.size(); i++)
            nums[i] = 2;
    }
};


// Optimized Approach using pointers low,mid and high
// Tutorial - https://www.youtube.com/watch?v=15KEctByByU

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low = 0;
//         int mid = 0;
//         int high = nums.size() - 1;
        
//         while(mid <= high)
//         {
//             if(nums[mid] == 0)
//             {   
//                 swap(nums[mid],nums[low]);
//                 mid++;
//                 low++;
//             }
//             else if(nums[mid] == 1)
//                 mid++;
//             else
//             {
//                 swap(nums[mid],nums[high]);
//                 high--;
//             }     
//         }
//     }
// };