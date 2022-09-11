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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dumpHead = new ListNode();
        ListNode* Head = dumpHead;
        while(1){
            if(list1 == NULL){ dumpHead->next = list2;break;}
            else if(list2 == NULL){ dumpHead->next = list1;break;}
            if(list1->val<=list2->val){
                dumpHead->next = list1;
                list1 = list1->next;
                dumpHead = dumpHead->next;
            }
            else{
                dumpHead->next = list2;
                list2 = list2->next;
                dumpHead = dumpHead->next;
            }

        }
        return Head->next; 
    }
};