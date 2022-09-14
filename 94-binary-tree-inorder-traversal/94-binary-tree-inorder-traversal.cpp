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
    vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> vec;
//         stack s;
//         s.push_back(root->val);
//         TreeNode* temp = root;
//         while(!s.Empty){
//             temp = temp->left;
//             s.push_back(temp->val);
            
//         }
        vector<int> vec;
        inorder(vec,root);
        return vec;
    }
    void inorder(vector<int>& vec,TreeNode* node){
        TreeNode *temp = node;
        if(temp==NULL) return ;
            
        inorder(vec,temp->left);
        vec.push_back(temp->val);
        inorder(vec,temp->right);
    }
};