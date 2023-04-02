class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success)     { 
        vector<int> res;
        sort(potions.begin(), potions.end());
        for(int i = 0; i < spells.size(); i++)
        {   
            int count = 0;   
            int l = 0, h = potions.size() - 1, successStartIdx = potions.size();
            while(l <= h)
            {
                int mid = l + (h-l)/2;
                long long val = (long long)spells[i] * potions[mid];
                if(val >= success)
                {
                    successStartIdx = mid;
                    h = mid - 1;
                }
                else
                    l = mid + 1;
            }
            res.push_back(potions.size() - successStartIdx);
        }
        return res;
    }
};
// Tutorial - https://www.youtube.com/watch?v=KWrV_pI0Jg4