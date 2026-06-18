class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*>s;
        if(root != NULL)s.push(root);
        while(s.size()>0){
            TreeNode* temp = s.top();
            s.pop();
            ans.push_back(temp->val);
            if(temp->right != NULL) s.push(temp->right);
            if(temp->left != NULL) s.push(temp->left);

        }
        return ans;
    }
};