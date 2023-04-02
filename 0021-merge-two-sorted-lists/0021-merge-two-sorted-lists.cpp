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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        else if(list2 == NULL)
            return list1;
        else if(list1 == NULL && list2 == NULL)
            return NULL;
        else
        {   
            // Merge Linked List
            ListNode* head = list1;
            while(head->next != NULL)
                head = head->next;
            head->next = list2;
        }
        
        ListNode* curr = list1;
        ListNode* forw;
        
        // Sorting the Linked List
        while(curr != NULL)
        {   
            forw = curr->next;
            while(forw != NULL)
            {
                if(curr->val > forw->val)
                {
                    int temp = curr->val;
                    curr->val = forw->val;
                    forw->val = temp;
                }
                forw = forw->next;
            }
            curr = curr->next;
        }
        return list1;
    }
};