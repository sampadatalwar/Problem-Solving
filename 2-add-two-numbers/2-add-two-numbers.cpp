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
        
        int carry = 0;

        ListNode* head=NULL, *temp = head;
        int num;
        
   
        while(l1 || l2){
            
            int l1_val=0, l2_val=0;
            
            if(l1)
                l1_val = l1->val;
            
            if(l2)
                l2_val = l2->val;
            
            int sum = l1_val + l2_val;
            
            if(carry > 0){
                sum += carry; 
            }
            if(sum>9){
                carry = sum/10;
                num = sum%10;

            }
            else{
                carry = 0;
                num = sum;

            }
            
            if(head == NULL){
                head = new ListNode(num);
                temp = head;
            }
            else{
                
                temp->next = new ListNode(num);
                temp = temp->next;
            }
            
            if(l1)
                l1 = l1->next;
            
            if(l2)
                l2 = l2->next;
        }
        
        if(carry>0){
            temp->next = new ListNode(carry);

        }
        
        return head;
    }
};