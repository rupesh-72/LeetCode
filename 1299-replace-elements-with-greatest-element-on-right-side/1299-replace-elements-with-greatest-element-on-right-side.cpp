// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
//         vector<int> res;
//         int maxVal;
//         for(int i = 1; i < arr.size(); i++)
//         {
//             maxVal = *max_element(arr.begin() + i, arr.end());
//             res.push_back(maxVal);
//         }
//         res.push_back(-1);
        
//         return res;
//     }
// };


// Optimized Solution in O(n)

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        
        res[n-1] = -1;
        
        for(int i = n-2; i >= 0; i--)
        {
            res[i] = max(res[i+1], arr[i+1]);
        }
        return res;
    }
};
