/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    
    map<int, Employee*> imp; 
    int getImportance(vector<Employee*> employees, int id) {
        
        int c = 0;
        
        for(int i=0; i<employees.size(); i++){
            
            // make map with imp key
            imp[employees[i]->id] = employees[i];
            
            
        }
        return dfs(id);
        
    }
    
    int dfs(int id){
            
        int count = imp[id]->importance;
        
        for( int subs : imp[id]->subordinates){
            
            count += dfs(subs);
        }
            
        return count;
    }

};