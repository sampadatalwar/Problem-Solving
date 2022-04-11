class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> res;
        
        int p1 = 0;
        int p2 = 0;
        
     
        
        while(p1<m && p2<n){
            
            if(nums1[p1] < nums2[p2]){
                
                res.push_back(nums1[p1]);
                p1++;
            }
            else{
                res.push_back(nums2[p2]);
                p2++;
            }
        }
 
        if(p1 < m){
            
            while(p1<m){
                res.push_back(nums1[p1]);
                p1++;
            }
        }
        
                    
        if(p2<n){
            
            while(p2<n){
                 res.push_back(nums2[p2]);
            p2++;
            }
                              
        }
                              
       nums1 = res; 
    }
};