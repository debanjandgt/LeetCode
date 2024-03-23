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
    void reorderList(ListNode* head) {
        vector<ListNode*> vec;
        ListNode* temp=head;
        while(temp)
        {
            vec.push_back(temp);
            temp=temp->next;
        }
        int i=0,j=vec.size()-1;
        vector<ListNode*> v2;
        while(i<j)
        {
            v2.push_back(vec[i++]);
            v2.push_back(vec[j--]);
        }
        if(vec.size()%2 == 1)
        v2.push_back(vec[i]);


        for(int i=0;i<v2.size()-1;i++)
        {
            v2[i]->next=v2[i+1];
        }
        if(v2.size() >= 1)
        {
            v2[v2.size()-1]->next=NULL;
        }
    }
};
