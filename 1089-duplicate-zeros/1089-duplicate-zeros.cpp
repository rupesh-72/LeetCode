class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == 0)
                temp.push_back(0);
            temp.push_back(arr[i]);
        }
        
        for(int i = 0; i < arr.size(); i++)
            arr[i] = temp[i];
    }
};