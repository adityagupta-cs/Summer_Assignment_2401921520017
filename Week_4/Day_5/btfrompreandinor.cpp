class Solution {
    TreeNode* solve(vector<int>& preorder,int prestart,int preend, vector<int>& inorder,int
     instart,int inend,map<int,int>&mp){
        if(prestart>preend || instart>inend) return nullptr;
        TreeNode* root=new TreeNode(preorder[prestart]);
        int in=mp[root->val];
        int num=in-instart;
        root->left=solve(preorder,prestart+1,prestart+num,inorder,instart,in-1,mp);
        root->right=solve(preorder,prestart+num+1,preend,inorder,in+1,inend,mp);
        return root;
     }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return solve(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
    }
};