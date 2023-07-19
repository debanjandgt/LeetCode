/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;

        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> an1;
            while(n>0)
            {
                TreeNode* temp=q.front();
                q.pop();
                an1.push_back(temp->val);
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
                n--;
            }
            ans.push_back(an1);
        }

        int l=ans.size()-1;
        return ans[l][0];
    }
};
