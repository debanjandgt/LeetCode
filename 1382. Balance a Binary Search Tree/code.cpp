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
    void solve(TreeNode* root,vector<int>& vec)
    {
        if(root != NULL)
        {
            vec.push_back(root->val);
        }
        if(root->left)solve(root->left,vec);
        if(root->right)solve(root->right,vec);
        return;
    }
    TreeNode* transform(vector<int>& vec,int low,int high)
    {
        if(low > high)
        return NULL;
        int mid=(low+high)/2;
        TreeNode* newR=new TreeNode(vec[mid]);
        newR->left=transform(vec,low,mid-1);
        newR->right=transform(vec,mid+1,high);
        return newR;   
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> vec;
        solve(root,vec);
        sort(vec.begin(),vec.end());
        TreeNode* newRoot=transform(vec,0,vec.size()-1);
        return newRoot;
    }
};
