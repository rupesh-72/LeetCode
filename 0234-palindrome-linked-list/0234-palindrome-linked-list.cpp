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
    bool isPalindrome(ListNode* head) {
        string str = "";
        while(head != NULL)
        {
            str += to_string(head->val);
            head = head->next;
        }
        
        string reverseStr = str;
        reverse(reverseStr.begin(), reverseStr.end());
        if(str == reverseStr)
            return true;
        return false;
    }
};