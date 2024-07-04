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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* front=NULL;
        ListNode* curr=NULL;
        ListNode* currNode=NULL;
        int sum=0;
        while(head)
        {
            int val=head->val;
            if(val == 0)
            {
                if(sum != 0)
                {
                    if(front == NULL)
                    {
                        front=new ListNode(sum);
                        curr=front;
                    }
                    else
                    {
                        currNode=new ListNode(sum);
                        curr->next=currNode;
                        curr=curr->next;
                    }
                    sum=0;
                }
            }
            else sum+=val;
            head=head->next;
        }
        curr->next=head;
        return front;
    }
};
