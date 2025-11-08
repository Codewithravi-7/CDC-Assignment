// Question Link :- https://leetcode.com/problems/add-two-numbers/description/ Leetcode (2)
// Time Complexity :- O(max(n, m))
// Time Complexity :- O(1)

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL)
            return NULL;

        ListNode* p1 = l1;
        ListNode* p2 = l2;
        int carry = 0;
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        while (p1 != NULL || p2 != NULL) {
            int val1 = (p1 != NULL) ? p1->val : 0;
            int val2 = (p2 != NULL) ? p2->val : 0;

            int sum = val1 + val2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);

            tail->next = newNode;
            tail = newNode;

            if (p1 != NULL)
                p1 = p1->next;
            if (p2 != NULL)
                p2 = p2->next;
        }
        if (carry > 0) {
            tail->next = new ListNode(carry);
        }
        return dummy->next;
    }
};
