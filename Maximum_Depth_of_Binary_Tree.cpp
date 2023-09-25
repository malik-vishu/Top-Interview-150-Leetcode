//104. Maximum Depth of Binary Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private: int Depth(TreeNode* node,int cnt){
    if(node)
        cnt++;
    if(!node || !node->left && !node->right)
        return cnt;
    int l = Depth(node->left,cnt);
    int r = Depth(node->right,cnt);
    return max(l,r);
}
public:
    int maxDepth(TreeNode* root) {
        int cnt = 0;
        return Depth(root,cnt);
    }
};
