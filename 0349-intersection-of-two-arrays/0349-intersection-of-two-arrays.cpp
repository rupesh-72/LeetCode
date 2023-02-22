class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        
        sort(nums1.begin(),nums1.end()); 
        auto it = unique(nums1.begin(), nums1.end()); // returns iterator of last element
        nums1.resize(distance(nums1.begin(), it)); // distance returns number of elements and                                                       resize function resizes the vector size
        
        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                    res.push_back(nums1[i]);
                    break;
                }
            }
        }
        return res;
    }
};