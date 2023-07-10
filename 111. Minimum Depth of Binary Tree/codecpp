class Solution {
public:
    void solve(TreeNode* root,int& minL,int s)
    {
        if(root == NULL)
        return;
        if(root-> left == NULL && root->right == NULL)
        {
            minL=min(minL,s);
            return ;
        }
        solve(root->left,minL,s+1);
        solve(root->right,minL,s+1);        
    }
    int minDepth(TreeNode* root) {
        int minL=INT_MAX;
        int s=1;
        solve(root,minL,s);
        return minL==INT_MAX?0:minL;
        
    }
};
