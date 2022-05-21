class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        int len = nums.size();
        
        int minDiff = INT_MAX;
        
        if(len<=4)
            return 0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<4; i++){
            
            minDiff = min(minDiff, nums[len-1-3+i]-nums[i] );
            
        }
        return minDiff;
    }
};