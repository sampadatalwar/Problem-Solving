class Solution {
public:
    vector<vector<int>> result;
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        
        vector<int> combination;
        
        backtrack(candidates, target, combination,0);
        
        return result;
        
    }
    
    
    
    void backtrack(vector<int> candidates, int remain, vector<int> combination, int start){
        
        
        if(remain == 0){
            result.push_back(combination);
            return;
        }
        else if(remain < 0)
            return;
        
        for(int i=start; i<candidates.size(); i++){
            
           combination.push_back(candidates[i]);
           //remain = remain - candidates[i];
           
            this->backtrack(candidates, remain - candidates[i], combination,i);
            
            combination.pop_back();
               
        }
        
        
        
        
        
        
    }
};