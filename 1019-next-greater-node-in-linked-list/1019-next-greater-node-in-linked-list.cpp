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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;
        while(head != NULL)
        {   
            int x = head->val;
            int flag = 0;
            ListNode* ptr = head->next;
            while(ptr != NULL)
            {
                if(ptr->val > x)
                {
                    res.push_back(ptr->val);
                    flag = 1;
                    break;
                }
                ptr = ptr->next;
            }
            if(flag == 0)
                res.push_back(0);
            head = head->next;
        }
        return res;
    }
};