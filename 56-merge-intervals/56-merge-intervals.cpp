class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> result;

        
        if(intervals.size() == 1 || intervals.size() == 0)
            return intervals;
        
        
        bool check = false;
        
        sort(intervals.begin(), intervals.end());
        //result.push_back(intervals[0]);
        
        vector<int> current = intervals[0];
        
        for(int i=1; i<intervals.size(); i++){
             
            
            if(intervals[i][0] <= current[1]){
                
                //overlap exists
                current[1] = max(intervals[i][1], current[1]);
                
            }else{
                result.push_back(current);
                current = intervals[i];
            }
        }
           
            
        
            result.push_back(current);
            
        
        
        return result;
        
    }
};