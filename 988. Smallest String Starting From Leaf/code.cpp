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
    string smallest;
    void solve(TreeNode* root,string word)
    {
        if(root == NULL)
        return;
        if(root->left == NULL && root->right == NULL)
        {
            word.push_back(root->val+'a');
            string temp=word;
            reverse(temp.begin(),temp.end());
            if(smallest == "" || temp < smallest)
            smallest=temp;

            return;
        }
        word.push_back(root->val+'a');
        solve(root->left,word);
        solve(root->right,word);
    }
    string smallestFromLeaf(TreeNode* root) {
        string word;
    solve(root,word);
    return smallest;
    }
};
