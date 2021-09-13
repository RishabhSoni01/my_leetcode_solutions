 /** struct ListNode {
      int val;
      ListNode *next;
  };**/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ListNode* temphead=new ListNode(-1);
        ListNode* node=temphead;
        int carry=0;
        
        while(l1!=NULL || l2!=NULL|| carry)
        {
            int sum=carry;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            node->next=new ListNode(sum%10);
            node=node->next;
            carry=sum/10;
            
            
            
        }
        if(carry!=0)
            node->next=new ListNode(carry);
        
        return temphead->next;
    }
};