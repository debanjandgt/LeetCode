class Solution {
public:
    void addOneRowUtil(TreeNode* root, int depth, int val, int currentLevel) {
        if (!root)
            return;
        if (depth == 1) { 
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            root = newRoot;
            return;
        }
        if (currentLevel == depth - 1) {
            TreeNode* t1 = new TreeNode(val);
            TreeNode* t2 = new TreeNode(val);
            t1->left = root->left;
            t2->right = root->right;
            root->left = t1;
            root->right = t2;
            return;
        }
        addOneRowUtil(root->left, depth, val, currentLevel + 1);
        addOneRowUtil(root->right, depth, val, currentLevel + 1);
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) { 
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        addOneRowUtil(root, depth, val, 1);
        return root;
    }
};
