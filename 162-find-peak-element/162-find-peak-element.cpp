class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int s = nums.size();
        
        if(s == 1)
            return 0;
        
        for(int i=0; i<nums.size(); i++){
            
    
                
            if(i > 0 && i<s-1){
                
                if(nums[i] > nums[i-1] && nums[i]>nums[i+1])
                    return i;
            }    
        }
        
                
            if(nums[0] > nums[1])
                return 0;
            
            if(nums[s-1] > nums[s-2])
                return s-1;
        
        return -1;
        
    }
};