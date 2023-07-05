class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         if(root==NULL)
        return {};
        queue<TreeNode*> q;
        q.push(root);
        deque<vector<int>> dq;
        vector<int> ans;
        int n=q.size();
       
        while(!q.empty())
        {
            int n=q.size();
            ans.clear();
            while(n)
            {
                TreeNode* tt=q.front();
                q.pop();
                ans.push_back(tt->val);
                if(tt->left)
                q.push(tt->left);
                if(tt->right)
                q.push(tt->right);
                n--;
            }
            dq.push_front(ans);
        }
        vector<vector<int>> fAns(dq.begin(),dq.end());
        return fAns;
        

    }
};
