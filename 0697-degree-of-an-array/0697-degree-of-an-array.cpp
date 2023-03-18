class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> startIdx, endIdx, count;
        for(int i = 0; i < nums.size(); i++)
        {
            if(startIdx.find(nums[i]) == startIdx.end())
                startIdx[nums[i]] = i;
            endIdx[nums[i]] = i;
            count[nums[i]]++;
        }
        
        int degree = 0;
        for(auto it = count.begin(); it != count.end(); it++)
        {
            if(it->second > degree)
                degree = it->second;
        }
        
        int ans = nums.size();
        for(auto it = count.begin(); it != count.end(); it++)
        {
            if(degree == it->second)
                ans = min(ans, endIdx[it->first] - startIdx[it->first] + 1);
        }
        return ans;
    }
};
// Tutorial - https://www.youtube.com/watch?v=byGL1OtOmP0