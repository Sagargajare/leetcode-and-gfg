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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int,int> mp;
        
        for(auto x:lists){
            ListNode* itr = x;
            while(itr){
                mp[itr->val]++;
                itr = itr->next;
            }
        }
        ListNode* head = new ListNode();
        ListNode* temp = head;
        for(auto x:mp){
            int n = x.second;
            while(n--){
                temp->next = new ListNode(x.first);
                temp = temp->next;
            }
        }
        return head->next;
    }
};