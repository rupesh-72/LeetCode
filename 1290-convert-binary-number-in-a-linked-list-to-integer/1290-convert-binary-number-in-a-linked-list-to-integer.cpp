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
    int getDecimalValue(ListNode* head) {
        ListNode* ptr = head;
        long long int decimal = 0;
        int count = 0;
        while(ptr != NULL)
        {
            ptr = ptr->next;
            count++;
        }
        
        while(head != NULL)
        {   
            count--;
            if(head->val == 1)
                decimal += (1<<count);
            head = head->next;
        }
        return decimal;
    }
};