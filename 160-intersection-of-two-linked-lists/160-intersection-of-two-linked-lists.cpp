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
        unordered_set<ListNode*> uset;
        ListNode* one = headA;
        ListNode* two = headB;
        while(one){
            if(uset.find(one) != uset.end()){
                return one;
            }else{
                uset.insert(one);
            }
            one = one->next;
        }
        while(two){
            if(uset.find(two) != uset.end()){
                return two;
            }else{
                uset.insert(two);
            }
            two = two->next;
        }
        return NULL;
        
    }
};