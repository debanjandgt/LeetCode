class Solution {
public:

    void solve(TreeNode* root,vector<vector<int>>& finalAns,vector<int> ans
    ,int sum,int targetSum)
    {
        if(root == NULL)
        return;
        if(root->left== NULL && root->right ==NULL)
        {
            if(sum+root->val == targetSum)
            {
                ans.push_back(root->val);
                finalAns.push_back(ans);
            }
        }
      

        int elem =root->val;
        sum+=elem;
        ans.push_back(elem);
        solve(root->left,finalAns,ans,sum,targetSum);
        solve(root->right,finalAns,ans,sum,targetSum);
        sum-=elem;
        ans.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> finalAns;
        vector<int> ans;
        int sum=0;
        solve(root,finalAns,ans,sum,targetSum);
        return finalAns;
    }
};
