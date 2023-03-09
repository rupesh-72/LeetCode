class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int prefixSum[n];
        int sum = 0;
        for(int i = 0; i < n; i++) // calculate prefix sum
        {
            sum += nums[i];
            prefixSum[i] = sum;
        }
        
        int ans = 0;
        unordered_map<int,int> mp;
        mp[0]++; // insert 0 bcoz initially prefix sum is 0
        for(int i = 0; i < n; i++)
        {
            int rem = (prefixSum[i] % k);
            if(rem < 0) // to calculate the remainder of negative number
                rem += k;
            if(mp.find(rem) != mp.end())
                ans += mp[rem];
            mp[rem]++;
        }
        return ans;
    }
};

// Tutorial - https://www.youtube.com/watch?v=ufXxc8Vty9A