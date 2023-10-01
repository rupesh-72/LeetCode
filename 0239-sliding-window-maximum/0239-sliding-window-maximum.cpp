// Brute Force Approach

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int> ans;
//         for(int i = 0; i <= nums.size()-k; i++){
//             int currMax = INT_MIN;
//             for(int j = i; j < k+i; j++){
//                 currMax = max(currMax, nums[j]);
//             }
//             ans.push_back(currMax);
//         }
//         return ans;
//     }
// };

// Optimized Approach

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> q;
        
        int i = 0, j = 0;
        while(j < nums.size()){
            while (!q.empty() && nums[j] > q.back()) {
                q.pop_back(); // deleting all the element smaller than nums[j] from q
            }
            q.push_back(nums[j]); // pushing the largest element in q
            
            if(j-i+1 < k) // creating window size
                j++;
            else if(j-i+1 == k){
                ans.push_back(q.front());
                if(nums[i] == q.front()) //deleting ith elment from q and sliding the window
                    q.pop_front();
                i++,j++;
            }
        }
        return ans;
    }
};