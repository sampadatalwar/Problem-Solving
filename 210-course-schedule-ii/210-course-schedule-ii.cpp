class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> result;
        queue<int> q;
        
        //build adjacency list
        unordered_map<int, vector<int>> adj;
        vector<int> indeg(numCourses,0);
        
        for(int i=0; i<numCourses; i++){
            
            vector<int> temp;
            adj[i] = temp;
        }
        
        for(int i=0; i<prerequisites.size(); i++){
            
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]) ;
            indeg[prerequisites[i][0]]++;
        }
        
        for(int i=0; i< numCourses; i++){
            
            if(indeg[i] == 0)
                q.push(i);
        }
        
        if(q.empty())
            return result;
        
        while(!q.empty()){
            
            //take first element from queue
            int current  = q.front();
            result.push_back(current);
            q.pop();
            // push in result and decrement indegree
            
            for(int i : adj[current]){
                
                indeg[i]--;
                
                if(indeg[i] == 0)
                    q.push(i);
            }
            
        }
        
        if(result.size() != numCourses)
            return{};
        
       return result; 
    }
};