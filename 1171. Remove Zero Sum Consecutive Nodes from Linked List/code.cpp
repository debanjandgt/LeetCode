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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* temp=head;
        int pSum=0;
        map<int,ListNode*> mp;
        mp[0]=dummy;
        while(temp)
        {
            pSum+=temp->val;
            if(mp.find(pSum) != mp.end())
            {
                ListNode* t=mp[pSum];
                ListNode* copy=t;
                int pref=pSum;
                while(t != temp)
                {
                    t=t->next;
                    pref+=t->val;
                    if(t!=temp)
                    mp.erase(pref);
                }
                copy->next=t->next;
            }
            else {
            mp[pSum]=temp;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};
