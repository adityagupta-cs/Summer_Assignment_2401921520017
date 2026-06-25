class Solution {
    int height(TreeNode* root,int &sum){
        if(root==nullptr) return 0;
        int left=max(0,height(root->left,sum));
        int right=max(0,height(root->right,sum));
        sum=max(sum,left+right+root->val);
        return root->val+max(left,right);
    }
public:
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        height(root,sum);
        return sum;
    }
};