class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* prev = NULL ;
        ListNode* s = head ;
        ListNode* f = head ;
        while(n>0)
        {
          n-- ;
         f = f->next ;
            
        }
        if(f==NULL) return head->next;
        while(f->next != NULL)
        {
           // prev = s ;
            s = s->next ;
            f = f->next ;
        }
         s->next = s->next->next ;
        return head ;
    }
};