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
    int length(ListNode* head)
    {
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            length++;
        }
        
        return length;
        
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length1=length(head);
        if(length1==n)
        {
            ListNode* temp=head->next;
            delete(head);
            return temp;
        }
          int remaining_traversal = length1-n-1;
    ListNode *temp = head;
    while(remaining_traversal--)
        temp = temp->next;
    temp->next = temp->next->next;
    return head;
    }
};