class Solution {
    private: 
        int height(TreeNode* root,int &dia){
            if(root==nullptr){
                return 0;
            }
            int left=height(root->left,dia);
            int right=height(root->right,dia);
            dia=max(dia,left+right);
            return 1+max(left,right);
        } 
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        height(root,dia);
        return dia;
    }
};