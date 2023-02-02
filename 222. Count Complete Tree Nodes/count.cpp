class Solution {
public:
void Traverse(TreeNode* root,set<TreeNode*>& s){
    if(root == NULL)
    return;
    else{
        s.insert(root);
        Traverse(root->left,s);
        Traverse(root -> right,s);
    }
}
    int countNodes(TreeNode* root) {
        set<TreeNode*> s;
        Traverse(root,s);
        return(s.size());
    }
};
