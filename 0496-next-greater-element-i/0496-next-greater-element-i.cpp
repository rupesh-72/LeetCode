class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums2.size(); i++)
            mp[nums2[i]] = i;
        int idx;
        for(int i = 0; i < nums1.size(); i++)
        {   
            idx = mp[nums1[i]];
            int largest = nums1[i];
            for(int i = idx; i < nums2.size(); i++)
            {
                if(nums2[i] > largest)
                {
                    largest = nums2[i];
                    break;
                }
            }
            
            if(largest > nums1[i])
                res.push_back(largest);
            else
                res.push_back(-1);
        }
        return res;
    }
};