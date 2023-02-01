class Solution {
public:
void Traverse(TreeNode* root,vector<int>& v,int k){
    if(root == NULL)
    return;
    Traverse(root -> left ,v,k);
    v.push_back(root -> val);
    Traverse(root -> right , v,k);
}
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        Traverse(root,v,k);
        return(v[k-1]);

    }
};
