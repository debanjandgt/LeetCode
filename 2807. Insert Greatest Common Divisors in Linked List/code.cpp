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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<ListNode*> nodes;
        ListNode* temp=head;
        while(temp && temp->next)
        {
            int g = __gcd(temp->val,temp->next->val);
            ListNode* n=new ListNode(g);
             n->next=temp->next;
            temp->next=n;
           
            temp=temp->next->next;
        }
        return head;
        
    }
};
