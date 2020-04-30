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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int cnt = 0;
        while( temp != NULL)
        {
            temp = temp->next;
            cnt++;
        }
        cnt = cnt/2;
        temp = head;
        // cout<<cnt<<endl;
        while( temp != NULL)
        {
            cnt--;
            temp = temp->next;
            if( cnt == 0)
                return temp;
            
           
        }
        return head;
    }
};
