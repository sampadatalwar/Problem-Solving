class Solution {
public:
    int minimumSemesters(int n, vector<vector<int>>& relations) {
        
               vector<int> indeg(n,0);
        map<int,vector<int>> graph ;
        for(int i=0 ; i<relations.size() ; i++) {
            indeg[relations[i][1]-1]++ ;
            graph[relations[i][0]-1].push_back(relations[i][1]-1);
        }
        queue<int> q ;
        vector<bool> taken(n,false);
        for(int i=0 ; i<n ; i++) {
            if(indeg[i]==0) { q.push(i); taken[i]=true ; }
        }
        if(q.empty()) return -1 ;
        int ans=0 ;
        while(!q.empty()) {
            ans++ ;
            int sz=q.size();
            while(sz--) {
                int curr = q.front(); q.pop();
                taken[curr]=true ;
                for(int child : graph[curr]) {
                    indeg[child]-- ;
                    if(indeg[child]==0) q.push(child);
                }
            }
        }
        if(count(taken.begin(),taken.end(),false)) return -1 ;
        return ans ;
    }
};