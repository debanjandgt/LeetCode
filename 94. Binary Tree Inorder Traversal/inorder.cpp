class Solution {
public:
    void Traverse(vector<int>& v,TreeNode* root){
        if(root == NULL)
        return;
        Traverse(v,root->left);
        v.push_back(root -> val);
        Traverse(v,root -> right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root == NULL)
        return v;
        Traverse(v,root);
        return v;
    }
};
