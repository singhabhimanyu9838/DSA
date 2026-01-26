#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<unordered_map>
#include<queue>
#include<algorithm>
#include<stack>

using namespace std;

class Graph{
    public:
        unordered_map<int , list<pair<int,int>>>adj;
        void addEdge(int u , int v , int w, bool direction){
            // 0 -> undirected
            // 1 -> directed

            if(direction == 0){
                adj[u].push_back({v , w});
                adj[v].push_back({u ,w});
            }else{
                adj[u].push_back({v ,w});
            }
        }

        // void printAdjList(int n){
        //     for(int i =0;i<n;i++){
        //         cout<< i << ": {";
        //         for(auto j : adj[i]){
        //             cout<< j <<", ";
        //         }
        //         cout<<"}"<<endl;
        //     }
        // }

        // void shortestPathBfs(int src , int dest){
        //     unordered_map<int , bool>vis;
        //     unordered_map<int ,int>parent;
        //     queue<int>q;

        //     //initial state
        //     q.push(src);
        //     vis[src] = true;
        //     parent[src]= -1;

        //     //main logic
        //     while(!q.empty()){
        //         int frontNode = q.front();
        //         q.pop();
        //         for(auto nbr : adj[frontNode] ){
        //             if(!vis[nbr]){
        //                 q.push(nbr);
        //                 vis[nbr] = true;
        //                 parent[nbr] = frontNode;
        //             }
        //         }
        //     }

        //     //parent array ready

        //     vector<int>path;

        //     int node = dest;

        //     while(node != -1){
        //         path.push_back(node);
        //         node = parent[node];
        //     }

        //     reverse(path.begin() , path.end());
        //     cout<<"Printing Path :- ";
        //     //print path
        //     for(auto i : path){
        //         cout<< i <<"->";
        //     }cout<<endl;
        // }

        void topoSortDfs(int src , unordered_map<int , bool>&visited , stack<int>&ans){

            visited[src] = true;

            for(auto neighbour: adj[src]){
                if(!visited[neighbour.first]){
                    topoSortDfs(neighbour.first , visited , ans);
                }
            }
            //while returning , store the node in stack
            // cout<<"Pushing" << src<<endl;
            ans.push(src);
        }

        void shortestPathDfs(int src){
            stack<int>topoOrder;
            unordered_map<int , bool>vis;

            topoSortDfs(src , vis , topoOrder);

            //ab mere paas topo order ka stack ready hai
            int n = topoOrder.size();
            vector<int>dist(n ,10000);

            //initial state maintain
            dist[src]=0;
            //and src k neighbour k min dist ko update krte ho
            while(!topoOrder.empty()){
                src = topoOrder.top();
                topoOrder.pop();
                for(auto nbr : adj[src]){
                    dist[nbr.first] = min(dist[nbr.first] , dist[src] + nbr.second);
                }
            }

            for(int i =0;i<dist.size();i++){
                cout<<i<<"->"<<dist[i]<<endl;
            }
        
        }

};



int main(){

    Graph g;

    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(2,3,0);
    // g.addEdge(2,4,0);
    // g.addEdge(4,5,0);
    // g.addEdge(5,3,0);

    // int src = 0;
    // int dest = 3;
    // g.shortestPathBfs(src , dest);

    g.addEdge(0,1,5,1);
    g.addEdge(0,4,3,1);
    g.addEdge(0,2,13,1);
    g.addEdge(1,2,7,1);
    g.addEdge(1,4,1,1);
    g.addEdge(3,2,2,1);
    g.addEdge(4,3,6,1);

    g.shortestPathDfs(0);
    

    return 0;
}