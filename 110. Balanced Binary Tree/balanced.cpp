class Solution {
public:
int height(TreeNode* root){
    if(root == NULL)
    return 0;
    int l=height(root ->left);
    int r=height(root->right);
    int h=max(l,r)+1;
    return h;
}
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
        return true;

        bool left=isBalanced(root -> left);
        bool right = isBalanced(root -> right);
        bool h =  abs(height(root->left)-height(root->right)) <= 1;
        if(left && right && h)
        return true;
        else
        return false;
            }
};
