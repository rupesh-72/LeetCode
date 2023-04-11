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
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 0;
        ListNode* ptr = head;
        while(ptr != NULL)
        {
            ptr = ptr->next;
            count++;
        }
        
        ListNode* front = head;
        for(int i = 1; i < k; i++)
            front = front->next;
        
        ListNode* end = head;
        for(int i = 1; i <= count - k; i++)
            end = end->next;
        
        swap(front->val, end->val);
        
        return head;
    }
};