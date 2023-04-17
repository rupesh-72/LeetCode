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
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         int length = 0;
//         ListNode* ptr = head;
//         while(ptr != NULL)
//         {
//             length++;
//             ptr = ptr->next;
//         }
        
//         if(length == 1)
//             return NULL;
        
//         ListNode* temp = head;
//         for(int i = 1; i < length/2; i++)
//             temp = temp->next;
        
//         temp->next = temp->next->next;
//         return head;
//     }
// };

// Optimized Approach
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        if(fast->next == NULL)
            return NULL;
        else if(fast->next->next == NULL)
        {
            head->next = NULL;
            return head;
        }
        
        while(fast != NULL && fast->next != NULL)
        {   
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->val = slow->next->val;
        slow->next = slow->next->next;
        
        return head;
    }
};