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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       ListNode* temp=list1;
       int t=0;
       ListNode* t1=NULL;
       ListNode* t2=NULL;
       while(temp)
       {
        if(t == a-1)
        {
            t1=temp;
        }
        if(t == b)
        {
            t2=temp;
        }
        t++;
        temp=temp->next;
       }
       t1->next=list2;
       temp=list2;
       while(temp->next)
       {
        temp=temp->next;
       } 
       temp->next=t2->next;
       return list1;
    }
};
