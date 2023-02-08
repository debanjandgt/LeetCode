class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        if(root == NULL)
        return result;
        q.push(root);
        bool lr=true;
        while(!q.empty()){
            vector<int> v(q.size());
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* front=q.front();
                q.pop();
                int index=lr?i:size-i-1;
                v[index]=front->val;
                
                if(front ->left)
                q.push(front ->left);
                if(front ->right)
                q.push(front ->right);
            }
            lr=!lr;
            result.push_back(v);

        }
        return result;
    }
};
