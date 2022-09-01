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
        unordered_map<ListNode*,int> mp1;
        ListNode* temp = headA;
        while(temp!=0){
            mp1[temp] = 1;
            temp = temp->next;
        }
        temp = headB;
        while(temp!=0){
            if(mp1[temp]==1){
                return temp;
            }
            temp = temp->next;
        }
        return temp;
    }
};