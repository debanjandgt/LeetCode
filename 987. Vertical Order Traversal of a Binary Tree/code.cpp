class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
queue<pair<TreeNode*, pair<int, int>>> q;
        map<int,map<int,multiset<int>>> nodes;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto it=q.front();
            TreeNode* temp=it.first;
            int vertical=it.second.first;
            int level=it.second.second;
            q.pop();
            nodes[vertical][level].insert(temp->val);

            if(temp->left)
            q.push({temp->left,{vertical-1,level+1}});
            if(temp->right)
            q.push({temp->right,{vertical+1,level+1}});
        }
        vector<vector<int>> ans;
        for(auto it:nodes)
        {
            vector<int> row;
            for(auto p:it.second){
            row.insert(row.end(),p.second.begin(),p.second.end());
            }
            ans.push_back(row);
        }
        return ans;
    }
};
