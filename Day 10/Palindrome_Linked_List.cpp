/*
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
    bool isPalindrome(ListNode* head) {
        stack < int > st ;
        queue < int > q ;
        ListNode* dummy = head ;
        while(dummy!=NULL)
        {
            st.push(dummy->val) ;
            q.push(dummy->val) ;
            dummy = dummy->next ;
        }
        while(!st.empty() && !q.empty())
        {
             int s1 = st.top() ;
             st.pop() ;
            int q1 = q.front() ;
            q.pop();
            if(s1 != q1 )return false ;
            
        }
        return true ;
    }
};

