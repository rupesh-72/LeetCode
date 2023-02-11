class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> minHeap; // created min heap
        for(auto i : nums)
        {
            if(minHeap.size() < k) // size of min heap should be less than k
                minHeap.push(i);
            else if(minHeap.top() < i)
            {
                minHeap.pop();
                minHeap.push(i);
            }
        }
        return minHeap.top();
    }
};