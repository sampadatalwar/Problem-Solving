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
class BSTIterator {
public:
    
    stack<TreeNode*> s;
    
    BSTIterator(TreeNode* root) {
        
        stack<TreeNode*> s;
        
        this->s = s;
        
        while(root!=nullptr){
            
            this->s.push(root);
            root = root->left;
            
        }
        
    }
    
    int next() {
        
        TreeNode* curr = this->s.top();
        this->s.pop();
        
        if(curr->right){
            
            TreeNode* temp = curr->right;
            
            while(temp!= nullptr){
                
                this->s.push(temp);
                temp = temp->left;
                
            }
            
        }
        
        return curr->val;
        
    }
    
    
    bool hasNext() {
        
        return this->s.size() > 0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */