class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int index = 0, diff = INT_MAX, min;
        
        for(int i=nums.size()-1; i>=1; i--){
            
            if(nums[i] > nums[i-1]){
                
                index = i;
                break;

            }
            
        }
        
        if(index == 0){
            
            sort(nums.begin(), nums.end());
        }
        
        else{
            
            int toSwap = nums[index-1];
            
            //swap
            for(int i=index; i<nums.size(); i++){
            
                if(nums[i] > toSwap && nums[i]-toSwap < diff){
                

                    int temp = nums[i];
                    nums[i]= nums[index-1];
                    nums[index-1]=temp;
                
                }

            
            }
        //reverse
        sort((nums.begin()+index), nums.end());
            
        }
        

    }
};