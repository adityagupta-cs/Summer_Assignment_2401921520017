class Solution {
    bool solve(TreeNode* l1,TreeNode* r1){
        if(l1==nullptr || r1==nullptr){
            return l1==r1;
        }
        return (l1->val==r1->val) && solve(l1->left,r1->right) && solve(l1->right,r1->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return solve(root->left,root->right);
    }
};