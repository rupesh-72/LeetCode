class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int peak, ans = 0;
        int n = arr.size();
        for(int i = 1; i < n - 1; i++)
        {
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]) // finding peak
            {
                int leftValley = i;
                int rightValley = i;
                
                // finding left from the peak
                while(leftValley > 0 && arr[leftValley] > arr[leftValley - 1])
                {
                    leftValley--;
                }
                
                // finding right from the peak
                while(rightValley < n-1 && arr[rightValley] > arr[rightValley + 1])
                {
                    rightValley++;
                }
                ans = max(ans,(rightValley - leftValley + 1));
                i = rightValley; // now next mountain start from end of previous mountain
            }
        }
        return ans;
    }
};