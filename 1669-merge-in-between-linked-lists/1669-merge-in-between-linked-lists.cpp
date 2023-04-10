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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ptr_a = list1;
        ListNode* ptr_b = list1;
        for(int i = 0; i < a - 1; i++)
            ptr_a = ptr_a->next;
        
        for(int i = 0; i < b; i++)
            ptr_b = ptr_b->next;
            
        ptr_a->next = list2;
        ListNode* ptr = list1;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = ptr_b->next;
        
        return list1;
    }
};