class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxArea = 0;
        
        int r = grid.size();
        int c = grid[0].size();
        
        for(int i=0; i<r; i++){
            
            for(int j=0; j<c; j++){
                
               int area = getArea(i,j, grid);
                
                if(area > maxArea)
                    maxArea = area;
                
            }
        }
        
        return maxArea;
        
    }
    
    int getArea(int r, int c, vector<vector<int>>& grid){
        
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 0){
            
            return 0;
        }
        
        int x = 0;
        
        if(grid[r][c] == 1){
            
             x = 1;
            grid[r][c] = 0;
        }
           
        
        return (x + getArea(r+1, c, grid) + getArea(r-1, c, grid) + getArea(r, c+1, grid) + getArea(r, c-1, grid));
    }
};