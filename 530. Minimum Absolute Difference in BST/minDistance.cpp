class Solution {
public:
    void solve(TreeNode* root, vector<int> &ans)
{
    if(root == NULL)
    return;
    else
    {
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
    }
}
    int getMinimumDifference(TreeNode* root) {
        if(root == NULL)
        return 0;
        vector<int> ans;
        solve(root,ans);
        int mini=INT_MAX;
        for(int i=0;i<ans.size()-1;i++)
        {
            mini=min(mini,ans[i+1]-ans[i]);
        }
        return mini;
    }
};
