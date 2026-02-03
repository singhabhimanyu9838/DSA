

//practice the bfs and dfs traversal
//cycle detection in undirected graph and it will be done using BFS traversal

#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<list>
using namespace std;



class Graph{
    public:
        unordered_map<int , list<int>>adj;
    
        void addEdge(int u , int v , bool dir){
            if(dir){
                adj[u].push_back(v);
            }else{
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }

        void print(int n ){
            for(int i =0;i<n;i++){
                cout<<i << "-> {";
                for(auto nbr : adj[i]){
                    cout<<nbr<<" ";
                }
                cout<<"}"<<endl;
            }
        }

        void bfsTraversal(int src , unordered_map<int,bool>&vis){
            queue<int>q;
            
            q.push(src);
            vis[src] = true;
          
            cout<<"Bfs Traversal :-"<<endl;

            while(!q.empty()){
                int frontNode = q.front();
                cout<<frontNode<<" -> ";
                q.pop();
                for(auto nbr : adj[frontNode]){
                    if(!vis[nbr]){
                        q.push(nbr);
                        vis[nbr] = true;
                        
                    }
                }
            }
            cout<<endl;
        }

        void dfsTraversal(int src ,unordered_map<int,bool>&vis){
            cout<<src<<"->";
            for(auto nbr : adj[src]){
                if(!vis[nbr]){
                    vis[nbr] = true;
                    dfsTraversal(nbr , vis);
                }
            }
        }


        bool cycleDetectionUsingBfs(int src , unordered_map<int ,bool>&vis){
            queue<int>q;
            unordered_map<int , int > parent;

            q.push(src);
            vis[src] = true;
            parent[src] = -1;

            while(!q.empty()){
                int frontNode = q.front();
                q.pop();
                for(auto nbr : adj[frontNode]){
                    if(!vis[nbr]){
                        vis[nbr] = true;
                        q.push(nbr);
                        parent[nbr] = frontNode;
                    }else if(vis[nbr] == true && nbr != parent[frontNode]){
                        //cycle present
                        return true;
                    }
                }
            }

            return false;

        }

};


int main(){

    Graph g;

    // g.addEdge(0 , 1 , 0);
    // g.addEdge(0 , 6 , 0);
    // g.addEdge(1 , 2 , 0);
    // g.addEdge(2 , 4 , 0);
    // g.addEdge(4 , 3 , 0);
    // g.addEdge(2 , 5 , 0);

    int n = 7;
    //printing graph
    // g.print(n);

    //bfsTraversal
    unordered_map<int,bool>vis;
    // g.bfsTraversal( 0 , vis);


    // g.addEdge(0 , 1 , 1);
    // g.addEdge(0 , 6 , 1);
    // g.addEdge(1 , 2 , 1);
    // g.addEdge(2 , 4 , 1);
    // g.addEdge(4 , 3 , 1);
    // g.addEdge(2 , 5 , 1);

    // cout<<"dfsTraversal :- ";
    // g.dfsTraversal(0 , vis);
    cout<<endl;



    g.addEdge(0 , 1 , 0);
    g.addEdge(0 , 6 , 0);
    g.addEdge(1 , 2 , 0);
    g.addEdge(2 , 4 , 0);
    g.addEdge(4 , 3 , 0);
    g.addEdge(2 , 5 , 0);
    g.addEdge(1 , 3 , 0);

    //cycle detection in undirected graph using BFS traversal

    g.print(n);
    bool ans = g.cycleDetectionUsingBfs(0 , vis);
    if(ans) {
        cout<<"Cycle Present";
    } else {
        cout<<"Cycle Not present";
    }
    
    



    return 0;
}