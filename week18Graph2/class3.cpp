#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
#include<vector>
#include<stack>

using namespace std;

class Graph{
    public:
        unordered_map<int , list<int>>adj;

        void addEdge(int u , int v , bool direction){
            if(direction == 1){
                adj[u].push_back(v);
            }else{
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }


        void printAdj(int n){
            for(int i =0;i<n;i++){
                cout<<i<<"-> {";
                for(auto nbr:adj[i]){
                    cout<<nbr<<", ";
                }
                cout<<"}"<<endl;
            }
        }

        void topoSortDfs(stack<int>&s , int node , unordered_map<int , bool>&vis){
            vis[node] = true;

            for(auto nbr : adj[node]){
                if(!vis[nbr]){
                    topoSortDfs(s , nbr , vis);
                }
            }
            //backtrack
            s.push(node);
        }


        void dfs(int src ,unordered_map<int,bool>&visited , unordered_map<int , list<int>>&adjNew){
            visited[src] = true;
            cout<<src<<"->";
            for(auto nbr : adjNew[src]){
                if(!visited[nbr]){
                    dfs(nbr , visited ,adjNew);
                }
            }
        }

        //Kosaraju Algorithm -> Strongly Connected Component (SCC)

        int countSCC(int n){
            //find topoOrdering
            stack<int>s;
            unordered_map<int,bool>vis;

            for(int i=0;i<n;i++){
                if(!vis[i]){
                    topoSortDfs(s ,i ,vis);
                }
            }
            // yaha tk topological sort hai
            

            // step2: reverse all edges
            unordered_map<int , list<int>>adjNew;

            for(auto i : adj){
                for(auto j : i.second){
                    int u = i.first;
                    int v = j;
                    //u -> v ek edge tha , and mujhe reverse krna h
                    // iska mtlb v->u
                    adjNew[v].push_back(u);
                }
            }

            //traversal 

            int count =0;
            unordered_map<int ,bool>visited;

            while(!s.empty()){
                int src = s.top();
                s.pop();

                if(!visited[src]){
                    cout<<"SCC: ";
                    dfs(src , visited , adjNew);
                    //ek poora component traverse ho chka h , like find the number of island wala quetion
                    cout<<endl;
                    count++;
                }
            }
            return count;

        }

};

int main(){
    Graph g;
    g.addEdge(0,3,1);
    g.addEdge(3,2,1);
    g.addEdge(2,1,1);
    g.addEdge(1,0,1);
    g.addEdge(2,4,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,4,1);
    g.addEdge(6,7,1);
    int n =8;
 
    g.printAdj(n);

    

    int scc = g.countSCC(n);
    cout<<"SCC Count : "<<scc;

    // cout<<"Printing TopoSort :-";
    // while(!s.empty()){
    //     int top = s.top();
    //     s.pop();
    //     cout<<top<<" ";
    // }



    return 0;
}