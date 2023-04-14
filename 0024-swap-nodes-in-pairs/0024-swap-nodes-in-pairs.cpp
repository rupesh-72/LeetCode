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
    ListNode* swapPairs(ListNode* head) {
        ListNode* ptr = head;
        if(head == NULL)
            return NULL;
        while(ptr != NULL)
        {
            if(ptr->next != NULL)
                swap(ptr->val, ptr->next->val);
            else if(ptr->next == NULL)
                break;
            ptr = ptr->next->next;
        }
        return head;
    }
};