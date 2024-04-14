class Solution {
public:
int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left)
        {
            TreeNode* child=root->left;
            if(child->left == NULL && child->right == NULL)
            sum+=child->val;

            sumOfLeftLeaves(root->left);
        }
        if(root->right)
        {
            sumOfLeftLeaves(root->right);
        }
        return sum;
    }
};
