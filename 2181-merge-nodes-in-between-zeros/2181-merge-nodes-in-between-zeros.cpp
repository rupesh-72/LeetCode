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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ptr = head->next;
        ListNode* res = new ListNode(-1);
        ListNode* resHead = res;
        int sum = 0;
        while(ptr != NULL)
        {
            sum += ptr->val;
            if(ptr->val == 0)
            {
                ListNode* temp = new ListNode(sum);
                res->next = temp;
                res = temp;
                sum = 0;
            }
            ptr = ptr->next;
        }
        return resHead->next;
    }
};