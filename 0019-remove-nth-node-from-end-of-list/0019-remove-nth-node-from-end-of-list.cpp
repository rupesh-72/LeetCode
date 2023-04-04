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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head;
        int length = 0;
        while(ptr != NULL)
        {   
            ptr = ptr->next;
            length++;
        }
        
        ptr = head;
        for(int i = 1; i < length-n; i++)
            ptr = ptr->next;
        
        if(length - n == 0) // handle the case to remove starting node
            head = head->next;
        else
            ptr->next = ptr->next->next;
        
        return head;
    }
};