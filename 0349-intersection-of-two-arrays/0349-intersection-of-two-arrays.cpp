// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> res;
        
//         sort(nums1.begin(),nums1.end()); 
//         auto it = unique(nums1.begin(), nums1.end()); // returns iterator of last element
//         nums1.resize(distance(nums1.begin(), it)); // distance returns number of elements and                                                       resize function resizes the vector size
        
//         for(int i = 0; i < nums1.size(); i++)
//         {
//             for(int j = 0; j < nums2.size(); j++)
//             {
//                 if(nums1[i] == nums2[j])
//                 {
//                     res.push_back(nums1[i]);
//                     break;
//                 }
//             }
//         }
//         return res;
//     }
// };


// Optimized using unordered_set
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> s;
        for(int i = 0; i < nums1.size(); i++)
            s.insert(nums1[i]);
        
        for(int i = 0; i < nums2.size(); i++)
        {
            if(s.find(nums2[i]) != s.end())
            {
                res.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return res;
    }
};

