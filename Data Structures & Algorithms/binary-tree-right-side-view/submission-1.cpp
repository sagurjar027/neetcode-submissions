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
    void dfs(TreeNode* root,vector<int> &ans,int depth){
        if(root == NULL){
            return;
        }
        if(ans.size() == depth){
            ans.push_back(root->val);
        }
        dfs(root->right,ans,depth+1);
        dfs(root->left,ans,depth+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        vector<int> ans;
         dfs(root,ans,0);
         return ans;
       /* queue<TreeNode*> q;
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
        return ans;*/
    }
};
