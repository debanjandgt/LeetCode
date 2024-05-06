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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* temp=head;
        while(temp)
        {
                int v=temp->val;
                while(!st.empty() && st.top()->val < v)
                {
                        st.pop();
                }
                st.push(temp);
            temp=temp->next;
        }
        vector<ListNode*> vec;
        while(!st.empty())
        {
            vec.push_back(st.top());
            st.pop();
        }
        reverse(vec.begin(),vec.end());
        for(int i=0;i<vec.size()-1;i++)
        {
            vec[i]->next=vec[i+1];
        }
        vec[vec.size()-1]->next=NULL;
        return vec[0];
    }
};
