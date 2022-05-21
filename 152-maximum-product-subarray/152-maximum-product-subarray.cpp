class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int current_min = nums[0], current_max = nums[0], maxProd = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            
            int temp_max = max(nums[i], max(current_min*nums[i], current_max*nums[i]));
            
            current_min = min(nums[i], min(current_min*nums[i], current_max*nums[i]));
            
            current_max = temp_max;
            
            maxProd = max(maxProd,current_max);
            
        }
        
        return maxProd;
        
    }
};