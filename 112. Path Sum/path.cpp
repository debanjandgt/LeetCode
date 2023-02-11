class Solution {
public:
    void solve(TreeNode* root,int targetSum,int& sum,int& count){
        if(root == NULL){      
            return;
        }
        sum+=root->val;
        if(sum == targetSum && root->left == NULL && root -> right == NULL)
            count++;
        
        solve(root->left,targetSum,sum,count);
        solve(root->right,targetSum,sum,count);
        sum-=root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0,count=0;
        if (root == NULL)
        return false;
        solve(root,targetSum,sum,count);
        
        if(count>=1)
        return true;
        return false;
        
    }
};
