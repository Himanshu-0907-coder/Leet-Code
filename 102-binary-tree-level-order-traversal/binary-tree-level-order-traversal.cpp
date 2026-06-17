class Solution {
public:
    int level(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(level(root->left),level(root->right));
    }
    void nthLevels(TreeNode* root,int cur,int lvl,vector<int>& v){
        if(root == NULL) return;
        if(cur == lvl){
            v.push_back(root->val);
            return;
        }
        nthLevels(root->left,cur+1,lvl,v);
        nthLevels(root->right,cur+1,lvl,v);
    }
    void order(TreeNode* root,vector<vector<int>>& ans){
        int n = level(root);
        for(int i=1;i<=n;i++){
            vector<int> v;
            nthLevels(root,1,i,v);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        order(root,ans);
        return ans;
    }
};