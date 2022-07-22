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
        ListNode *head=new  ListNode (-1000);
        ListNode* ans = head;
        while(list1 != nullptr && list2 !=nullptr){
            if(list1->val <= list2->val){
                ans->next = list1;
                list1 = list1->next;
                ans = ans->next;
            }else{
                ans->next = list2;
                list2 = list2->next;
                ans = ans->next;
                
            }
        }
        while(list1 != NULL){
            ans->next = list1;
            list1 = list1->next;
            ans = ans->next;
        }
        
        while(list2 != NULL){
            ans->next = list2;
            list2 = list2->next;
            ans = ans->next;
        }
        return head->next;
    }
};