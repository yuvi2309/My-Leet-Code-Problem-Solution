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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next){return head;}
        ListNode* temp = head;
        ListNode* temp2 = head->next;
        while(temp2){
            if(temp->val<temp2->val){
                temp->next = temp2;
                temp = temp->next;
                temp2 = temp2->next;
            }else{
                temp2 = temp2->next;
                if(!temp2)temp->next=NULL;
            }
            
            
            
        }
        return head;
    }
};