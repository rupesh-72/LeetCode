class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
        }
        if(sum % 3 != 0)
            return false;
        int partSum = sum/3;
        
        int currSum = 0, check = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            currSum += arr[i];
            if(currSum == partSum)
            {
                check++;
                currSum = 0;
            }
        }
        
        if(check >= 3) // using > to handle [0,0,0,0] this types of test case
            return true;
        else
            return false;
    }
};