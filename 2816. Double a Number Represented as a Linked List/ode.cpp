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
    ListNode* doubleIt(ListNode* head) {
        long long ans=1;
        string s;
        ListNode* temp=head;
        while(temp)
        {
            s+=to_string(temp->val);
            temp=temp->next;
        }
        string s1=s;
        deque<int> dq;
        int i=s1.size()-1;
        int carry=0;
        while(i>=0)
        {
            char c1=s[i];
            char c2=s1[i];
            i--;
            int sum=c1-'0'+c2-'0'+carry;
            int v=sum%10;
            carry=sum/10;
            dq.push_front(v);
        }
        if(carry >= 1)
            dq.push_front(carry);
        vector<ListNode*> vec;
        for(int i=0;i<dq.size();i++)
        {
            ListNode* t=new ListNode(dq[i]);
            vec.push_back(t);
        }
        for(int i=0;i<vec.size()-1;i++)
            vec[i]->next=vec[i+1];
        
        vec[vec.size()-1]->next=NULL;
        return vec[0];
    }
};
