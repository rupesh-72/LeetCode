class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for(int i = 0; i < arr.size(); i++)
        {
            if(s.count(2*arr[i]))
                return true;
            else if(s.count(arr[i]/2) && arr[i]%2 == 0)
                return true;
            s.insert(arr[i]);
        }
        return false;
    }
};