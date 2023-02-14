class Solution {
public:
    void solve(TreeNode* root,vector<int>& v)
    {
        if(root == NULL)
        return;
        else
        {
            solve(root->left,v);
            v.push_back(root->val);
            solve(root->right,v);
        }
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        solve(root,v);
        int i=0,j=v.size()-1;
        while(i<j)
        {
            if(v[i]+v[j]==k)
            return true;
            else if(v[i]+v[j]<k)
            i++;
            else if(v[i]+v[j]>k)
            j--;
        }
        return false;
    }
};
