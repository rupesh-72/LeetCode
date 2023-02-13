class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        int m = accounts.size();
        int n = accounts[0].size(); // size of inside grid
        
        for(int i = 0; i < m; i++)
        {
            int currWealth = 0;
            for(int j = 0; j < n; j++)
            {
                currWealth += accounts[i][j]; // sum of inside grid
            }
            wealth = max(wealth,currWealth);
        }
        return wealth;
    }
};