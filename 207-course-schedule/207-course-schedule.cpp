class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        unordered_map<int, vector<int>> adj;
        vector<bool> seen(numCourses, false);
        vector<int> indegree(numCourses,0);
        
        queue<int> q;
        
        for(int i=0; i<numCourses; i++){
            
            vector<int> temp;
            adj[i] = temp;
            
        }
        
        for(int i=0; i<prerequisites.size(); i++){
            
            int x = prerequisites[i][0];
            int y = prerequisites[i][1];
            
            adj[y].push_back(x);
            indegree[x]++;

        }
        
        for(int i=0; i<numCourses; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        
        if(q.empty())
            return false;
        
        while(!q.empty()){
            
            int current = q.front();
            
            for(int x : adj[current]){
                
                
                indegree[x]--;
                if(indegree[x] == 0)
                    q.push(x);
            }
            
            q.pop();
            //adj.erase()
        }
        
        for(int i=0; i<numCourses; i++){
            if(indegree[i] > 0)
                return false;
        }
        
        return true;
    }
};