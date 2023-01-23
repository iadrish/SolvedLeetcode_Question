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
        if(l1==NULL && l2==NULL)
           return l1;
        if(l1==NULL && l2!=NULL)
            return l2;
        if(l1!=NULL && l2==NULL)
            return l1;
        ListNode* head=new ListNode();
    
        ListNode *temp=head;
        
        int x=0;
        while(l1!=NULL || l2!=NULL)
        {
            int sum=0;
            
            if (l2==NULL)
                sum=l1->val+x;
            else if(l1==NULL)
                sum=l2->val+x;
            else
            {
          sum=l1->val+l2->val+x; 
            }
        
             x=sum/10; 
            sum=sum%10;
            
            ListNode *node = new ListNode(sum);
            temp -> next = node;
            temp = temp->next;
                
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
        }
		// if the carry is generated at last nodes addition and it is greater than 0
        if(x>0)
        {
         ListNode *n = new ListNode(x);
           temp -> next = n;
            temp = temp->next;
        }
        return head->next;
    }
};