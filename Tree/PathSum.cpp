class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(root->left==NULL && root->right==NULL) return (targetSum==root->val);
        bool pathSumExists = false;
        if(root->left) pathSumExists=hasPathSum(root->left,targetSum-root->val);
        if(root->right) pathSumExists=pathSumExists || hasPathSum(root->right,targetSum - root->val);

        return pathSumExists;
    }
};
