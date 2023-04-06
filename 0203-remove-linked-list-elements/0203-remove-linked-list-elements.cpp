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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
            return NULL;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* ptr = dummy;
        while(ptr != NULL && ptr->next != NULL)
        {
            if(ptr->next->val == val)
                ptr->next = ptr->next->next;
            else
                ptr = ptr->next;
        }
        return dummy->next;
    }
};
// Tutorial - https://www.youtube.com/watch?v=JrRoR7ycM8U