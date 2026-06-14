class Solution {
public:
    bool check(TreeNode* root, TreeNode* target){
        if(root == NULL) return false;
        if(root == target) return true;

        return check(root->left,target) ||
               check(root->right,target);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root,
                                   TreeNode* p,
                                   TreeNode* q) {

        if(root == NULL) return NULL;

        if(root == p || root == q)
            return root;

        bool pLeft = check(root->left,p);
        bool qLeft = check(root->left,q);

        if(pLeft && qLeft)
            return lowestCommonAncestor(root->left,p,q);

        if(!pLeft && !qLeft)
            return lowestCommonAncestor(root->right,p,q);

        return root;
    }
};