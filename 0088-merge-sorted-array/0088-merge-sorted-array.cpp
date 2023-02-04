class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m+n-1;
        
        while(i >= 0 && j >= 0) // if both nums1 and nums2 are not empty
        {
            if(nums1[i] < nums2[j])
                nums1[k--] = nums2[j--];
            else
                nums1[k--] = nums1[i--];
        }
        while(j >= 0) // loop if nums1 is empty
            nums1[k--] = nums2[j--];
    }
};