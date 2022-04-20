class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> result(2,-1);
        
        int left = 0;
        int right = nums.size()-1;
        
        while(left<=right){
            
            if(nums[left] == target && nums[right] == target){
                
                result[0] = left;
                result[1] = right;
                
                return result;
            }
            
            //left <target
            //if right 
            if(nums[left] < target){
                left++;
            }
            
            if(nums[right] > target ){
                right--;
            }
            
        }
        
        return result;
    }
};