/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode* ptr = head;
        while(ptr != NULL){
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        int maxSum = 0;
        int sum = 0;
        for(int i = 0; i < v.size(); i++){
            sum = v[i] + v[v.size()-i-1];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};