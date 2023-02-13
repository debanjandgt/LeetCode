class Solution {
public:
    void solve(TreeNode* root,vector<int>& v){
        if(root ==  NULL)
        return;
        solve(root->left,v);
        v.push_back(root->val);
        solve(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
       vector<int> v;
       solve(root,v);
       for(int i=0;i<v.size()-1;i++){
           if(v[i]>=v[i+1])
           return false;
       }
       return true; 
    }
};
