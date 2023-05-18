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

// Bruteforce Approach
// Time Complexity - O(n) Spcae - O(n)
// class Solution {
// public:
//     int pairSum(ListNode* head) {
//         vector<int> v;
//         ListNode* ptr = head;
//         while(ptr != NULL){
//             v.push_back(ptr->val);
//             ptr = ptr->next;
//         }
        
//         int maxSum = 0;
//         int sum = 0;
//         for(int i = 0; i < v.size(); i++){
//             sum = v[i] + v[v.size()-i-1];
//             maxSum = max(maxSum, sum);
//         }
//         return maxSum;
//     }
// };

// Optimized Approach
// Time Complexity - O(n) Spcae - O(1)
class Solution {
public:
    int pairSum(ListNode* head) {
        //find middle of LinkedList
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        //Reverse Linked List from Middle
        ListNode* curr = slow;
        ListNode* next, *prev = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        //finding maxSum
        int maxSum = 0, sum = 0;
        ListNode *ptr1 = head, *ptr2 = prev;
        while(ptr1 != NULL && ptr2 != NULL){
            sum = ptr1->val + ptr2->val;
            maxSum = max(sum, maxSum);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return maxSum;
    }
};