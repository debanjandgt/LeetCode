    /**
    * Definition for a binary tree node.
    * struct TreeNode {
    *     int val;
    *     TreeNode *left;
    *     TreeNode *right;
    *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
    *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    * };
    */
    class Solution {
    public:
        TreeNode* removeLeafNodes(TreeNode* root, int target) {
            if(root != NULL && root->left == NULL && root->right == NULL && root->val == target)
                return NULL;
            TreeNode* LEF=NULL;
            TreeNode* RIG=NULL;
            if(root != NULL)
            {
                LEF=removeLeafNodes(root->left,target);
                RIG=removeLeafNodes(root->right,target);
                if(LEF!=NULL && LEF->left == NULL && LEF->right == NULL && LEF->val == target)
                    LEF= NULL;
                if(RIG!=NULL && RIG->left == NULL && RIG->right == NULL && RIG->val == target)
                    RIG= NULL;
                root->left=LEF;
                root->right=RIG;
            }
            if(root!=NULL && root->left==NULL && root->right == NULL && root->val == target)
                return NULL;
            return root;
        }
    };
