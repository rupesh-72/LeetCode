class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        vector<int> res;
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);
        for(int i = 1; i <= nums.size(); i++)
        {
            if(s.find(i) == s.end())
                res.push_back(i);
        }
        return res;
    }
};