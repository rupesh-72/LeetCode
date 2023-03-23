class Solution {
public:
    int titleToNumber(string columnTitle) {
        char ch;
        int val,ans = 0,power = 0;
        for(int i = columnTitle.size() - 1; i >= 0; i--)
        {
            ch = columnTitle[i];
            val = int(ch) - 65 + 1;
            ans += val * pow(26, power);
            power++;
        }
        return ans;
    }
};
// Tutorial - https://www.youtube.com/watch?v=LTuSPIGoDlA