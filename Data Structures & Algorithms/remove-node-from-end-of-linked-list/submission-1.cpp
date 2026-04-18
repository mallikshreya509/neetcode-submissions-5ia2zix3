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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* dummy=new ListNode(-1);
        if(!head ) return nullptr;
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr=dummy;

        for(int i=0;i<n;i++){
           curr=curr->next;
        }
        while(curr->next){
            curr=curr->next;
            prev=prev->next;
        }
          
          prev->next=prev->next->next;

        return dummy->next;     // 1 2 3 4 5 6 7   n=3 prev=1
        
    }
};
