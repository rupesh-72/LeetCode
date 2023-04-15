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
ListNode* createLL(vector<int> &values)
{   
    ListNode* dummy = new ListNode(0);
    ListNode* ptr = dummy;
    for(auto x : values)
    {
        ListNode* temp = new ListNode(x);
        dummy->next = temp;
        dummy = temp;
    }
    return ptr->next;
}
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        for(int i = 0; i < lists.size(); i++)
        {
            ListNode* temp = lists[i];
            while(temp != NULL)
            {
                values.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(values.begin(), values.end());
        return createLL(values);
    }
};