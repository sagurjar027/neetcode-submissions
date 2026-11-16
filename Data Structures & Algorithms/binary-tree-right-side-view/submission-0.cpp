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
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode * rs = nullptr;
            int n = q.size();
            for(int i=0;i<n;i++){
            TreeNode * node = q.front();
            q.pop();
            if(node){
                rs = node;
                q.push(node->left);
                q.push(node->right);
                }
            }
            if(rs){
                ans.push_back(rs->val);
            }
        }
        return ans;
    }
};
