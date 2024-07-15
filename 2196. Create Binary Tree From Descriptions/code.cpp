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
    TreeNode* solve(TreeNode* root,unordered_map<int,int>& leftChild,
    unordered_map<int,int>& rightChild)
    {
        if(root == NULL)
        return NULL;

        if(leftChild.find(root->val) != leftChild.end())
        {
            root->left=new TreeNode(leftChild[root->val]);
        }
        else
        root->left=NULL;

        if(rightChild.find(root->val) != rightChild.end())
        {
            root->right=new TreeNode(rightChild[root->val]);
        }
        else
        root->right=NULL;

        if(root->left != NULL)solve(root->left,leftChild,rightChild);
        if(root->right != NULL)solve(root->right,leftChild,rightChild);

        return root;
    }
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,int> leftChild;
        unordered_map<int,int> rightChild;
        unordered_map<int,int> parent;
        for(auto i:descriptions)
        {
            int r=i[0];
            int ch=i[1];
            int left=i[2];
            if(left == 1)
            {
                leftChild[r]=ch;
            }
            else if(left == 0)
            {
                rightChild[r]=ch;
            }
            parent[ch]=r;
        }
        int rr;
        for(auto i:descriptions)
        {
            int rt=i[0];
            if(parent.find(rt) == parent.end())
            {
                rr=rt;
                break;
            }
        }
        TreeNode* root=new TreeNode(rr);
        solve(root,leftChild,rightChild);
        return root;
    }
};
