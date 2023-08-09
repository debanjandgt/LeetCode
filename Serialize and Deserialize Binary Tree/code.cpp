class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL)
        return "";
        string str;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(!temp)
            {
                str=str+"#,";
            }
            if(temp){
                str+=to_string(temp->val)+",";
            q.push(temp->left);
            q.push(temp->right);
            }
        }
        cout << str;
        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
    if(data.size() == 0)
    return NULL;
    stringstream s(data);
    string str;
    getline(s,str,',');
    queue<TreeNode*> q;
    int v=stoi(str);
    TreeNode* temp=new TreeNode(v);
    q.push(temp);
    while(!q.empty())
    {
        TreeNode* node=q.front();
        q.pop();
        getline(s,str,',');
        if(str == "#")
        node->left=NULL;
        else if(str != "#")
        {
            int v=stoi(str);
            TreeNode* t=new TreeNode(v);
            node->left=t;
            q.push(t);
        }
        getline(s,str,',');
        if(str == "#")
        node->right=NULL;
        else if(str != "#")
        {
            int v=stoi(str);
            TreeNode* t=new TreeNode(v);
            node->right=t;
            q.push(t);
        }

    }
    return temp;
    }
};
