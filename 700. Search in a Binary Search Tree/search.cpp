class Solution {
public:
void Traverse(TreeNode* root, int val,TreeNode*& result){
    if(root == NULL)
    return;
    else{
        
        Traverse(root->left,val,result);
        if(root -> val == val)
        {
            result=root;
            return;
        }
        Traverse(root->right,val,result);
    }

}
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* result = NULL;
        Traverse(root,val,result);
        
        return result;
    }
};
