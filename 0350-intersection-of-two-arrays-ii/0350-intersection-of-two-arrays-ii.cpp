class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() < nums2.size())
            swap(nums1, nums2);
        
        unordered_map<int,int> mp;
        vector<int> res;
        
        for(int i = 0; i < nums1.size(); i++)
            mp[nums1[i]]++;
        
        for(auto val : nums2)
        {
            if(mp[val] > 0)
            {
                res.push_back(val);
                mp[val]--;
            }
        }
        return res;
    }
};