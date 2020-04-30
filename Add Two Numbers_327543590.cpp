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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        struct ListNode* prev = NULL;
        struct ListNode* head = NULL;
        while( l1 != NULL and l2 != NULL)
        {
            struct ListNode* temp =new ListNode(l1->val + l2->val + carry);
            carry = ( temp->val >= 10);
            temp->val %= 10;
            if( head == NULL)
                head = temp;
            else
                prev->next = temp;
            prev =  temp;
            l1 = l1->next;
            l2 = l2->next;
        }
        while( l1 != NULL)
        {
            struct ListNode* temp =new ListNode(l1->val + carry);
            carry = ( temp->val >= 10);
            temp->val %= 10;
            if( head == NULL)
                head = temp;
            else
                prev->next = temp;
            prev =  temp;
            l1 = l1->next;
        }
        while(l2 != NULL)
        {
            struct ListNode* temp =new ListNode(l2->val + carry);
            carry = ( temp->val >= 10);
            temp->val %= 10;
            if( head == NULL)
                head = temp;
            else
                prev->next = temp;
            prev =  temp;
            l2 = l2->next;
        }
        if( carry > 0)
        {
            struct ListNode* temp =new ListNode(carry);
            prev->next = temp;
            prev =  temp;
        }
        prev->next = NULL;
        return head;
    }
};
