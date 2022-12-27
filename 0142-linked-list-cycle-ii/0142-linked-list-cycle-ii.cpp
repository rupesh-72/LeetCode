/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)
            return NULL;
        
        ListNode* temp = head;
        unordered_map<ListNode*,bool> visited;
        
        while(temp != NULL && temp->next != NULL)
        {
            visited[temp] = true;
            temp = temp->next;
            
            if(visited[temp] == true)
                return temp;
        }
        return NULL;
    }
};