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
    int ans;
    int pseudoPalindromicPaths (TreeNode* root) {
        int arr[9] = {0};
        dfs(root,arr);
        return ans;
        
    }
    
    void dfs(TreeNode* root,int arr[]){
        if(root==NULL)return;
        int &curr = arr[root->val-1];
        // curr = curr?0:1;     meaning is next two line
        if(curr)curr=0;
        else curr = 1;
        if(!root->left and !root->right){
            int sum=0;
            for(int i =0;i<9;i++){
                sum+=arr[i];
            }
            if(sum==0||sum==1)ans++;
            curr = curr?0:1;
            return;
        }
    
        dfs(root->left,arr);
        dfs(root->right,arr);
        curr = curr?0:1;
    }
};