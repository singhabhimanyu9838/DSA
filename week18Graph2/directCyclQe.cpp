class Solution {
  public:
  
//GFG -> Safe States (question)
//using Cycle detection logic in directed graph


  bool checkCycle(unordered_map<int , list<int>>&adj , int src , unordered_map<int , bool>&visited , 
     unordered_map<int , bool>&dfsVisited , int safenodes[]){
         visited[src] = true;
         dfsVisited[src] = true;
         safenodes[src] = 0;
         for(auto nbr  : adj[src]){
             if(!visited[nbr]){
                 bool aagekaAns = checkCycle(adj , nbr , visited , dfsVisited , safenodes);
                 if(aagekaAns )return true;
             }
             if(visited[nbr] == true && dfsVisited[nbr] == true)return true;
         }
         
         dfsVisited[src] = false;
         safenodes[src] = 1;
         return false;
     }
  
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        // Code here
        unordered_map<int , list<int>>adj;
         for(auto edg : edges){
            adj[edg[0]].push_back(edg[1]);
        }
        
        vector<int>ans;
        unordered_map<int , bool>visited , dfsVisited;
        int safenodes[V] = {0};
        for(int i=0;i<V;i++){
            if(!visited[i]){
                checkCycle(adj , i , visited , dfsVisited , safenodes);
                
            }
        }
        
        
        for(int i =0;i<V;i++){
            if(safenodes[i])ans.push_back(i);
        }
        
        return ans;     
        
    }
};