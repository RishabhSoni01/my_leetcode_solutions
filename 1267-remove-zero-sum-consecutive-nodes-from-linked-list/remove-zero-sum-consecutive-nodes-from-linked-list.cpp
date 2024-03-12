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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* root =new ListNode(0);
        root->next=head;
        unordered_map<int,ListNode*>mp;
        mp[0]=root;
        int prefixSum=0;
        
        while(head!=NULL){
            prefixSum+=head->val;
            
            //found value
            if(mp.find(prefixSum)!=mp.end()){
                ListNode* prev= mp[prefixSum];
                ListNode* start= prev;
                
                //delete bad references
                int temp = prefixSum;
                while(prev!=head){
                    prev=prev->next;
                    temp+=prev->val;
                    if(prev!=head)mp.erase(temp);
                }
                
                start->next = head->next;
            }else{
                mp[prefixSum]= head;
            }
            
            head=head->next;
        }
        
        return root->next;
    }
};