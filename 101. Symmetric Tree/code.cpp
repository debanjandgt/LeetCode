class Solution {
public:
    bool solve(TreeNode* r1, TreeNode* r2)
    {
        bool left,right;
        if( r1 == NULL && r2 == NULL)
        return true;
        if( r1 == NULL && r2 != NULL || r1 != NULL && r2 == NULL)
        return false;
        else{
            if(r1->val == r2->val)
            {
               left=solve(r1->right,r2->left);
             right=solve(r1->left,r2->right);
            }
            if(left && right)
            return true;
            else
            return false; 
            }
        }
        
    
    bool isSymmetric(TreeNode* root) {
        bool ans = solve(root->left,root->right);
        return ans;
    }
};
