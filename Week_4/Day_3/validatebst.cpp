class Solution {
    bool solve(TreeNode* root,long long x,long long y){
        if(root==nullptr) return true;
        if(root->val<=x || root->val>=y) return false;
        return solve(root->left,x,root->val) && solve(root->right,root->val,y);
    }
public:
    bool isValidBST(TreeNode* root) {
        return solve(root,LLONG_MIN,LLONG_MAX);
    }
};