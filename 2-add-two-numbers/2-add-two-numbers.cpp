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
        ListNode *temp = new ListNode();
        ListNode *p =l1, *q=l2, *ans=temp;
        int carry=0;
        while(p!=NULL || q!=NULL){
            int x,y,z;
            if(p!=NULL)x = p->val;
            else x =0;
            if(q!=NULL)y = q->val;
            else y =0;
            z = (x+y+carry)%10;
            carry = (x+y+carry)/10;
            ans->next = new ListNode(z);
            ans = ans->next;
            if(p!=NULL)p=p->next;
            if(q!=NULL)q=q->next;
            
        }
        if(carry!=0)ans->next = new ListNode(carry);
        cout << temp->val;
        return temp->next;
    }
};