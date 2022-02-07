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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int a_size = 0, b_size=0;
        
        ListNode *a = headA, *b = headB;
        
        while(a){
            a_size++;
            a = a->next;
        }
        
        while(b){
            b_size++;
            b = b->next;
        }
        
        a = headA;
        b = headB;
        

        if(a_size<b_size){
            
            for(int i=0; i<b_size-a_size; i++){
                
                b = b->next;
            
            }
            
        }
        else{
            
            for(int i=0; i<a_size-b_size; i++){
                
                a = a->next;
            
            }
            
        }
        
        
        while(a!=b){
            a= a->next;
            b = b->next;
        }
        
        return a;
    }
};