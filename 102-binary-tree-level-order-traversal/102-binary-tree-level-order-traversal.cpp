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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        
        if(root== nullptr)
            return result;
        
        queue<TreeNode*> curr;
        curr.push(root);
        //int level = 0;
        vector<int> temp;
        
        while(!curr.empty()){
            
            int len = curr.size();
            
            for(int i=0; i<len; i++){
              
                //cout<<level<<"- ";
                TreeNode* front = curr.front();
                curr.pop();
            
                temp.push_back(front->val);    
                //cout<<front->val<<" ";
                
                if(front->left)
                    curr.push(front->left);
                if(front->right)
                    curr.push(front->right);
            }
            //cout<<endl;
            //level++;
            result.push_back(temp);
            temp.clear();
            
        }
        
        return result;
    }
};