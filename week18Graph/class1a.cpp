#include <iostream>
#include <unordered_map>
#include <list>
#include<queue>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph
        if (direction == 0)
        {
            // undirected edge
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        else
        {
            // directed edge
            adjList[u].push_back(v);
        }
    }

    void printAdjList(int n)
    {

        for (int i = 0; i < n; i++)
        {
            cout << i << ": ";
            cout << " {";
            list<int> temp = adjList[i];
            for (auto j : temp)
            {
                cout << j << ",";
            }
            cout << "}" << endl;
        }
    }

    //class 2 -> detecting cycle in graph

    bool cycleDetectionUndirectedBFS(int src ,unordered_map<int , bool >&visited)
    {
        queue<int>q;
        unordered_map<int,int>parent;
        

        //initial state
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        //main logic
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr : adjList[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = frontNode;
                }
                //cycle detection case
                else if(visited[nbr] == true && nbr != parent[frontNode]){
                    //cycle present
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(0, 2, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 3, 0);
    int n =4;
    g.printAdjList(n);


    //checking the cycle in undirected grap

    unordered_map<int , bool >visited;


    bool ans =false;
    for(int i =0;i<n;i++){
        if(!visited[i]){
            ans = g.cycleDetectionUndirectedBFS(i , visited);
            if(ans == true){
                break;
            }
        }
    }

    if(ans == true){
        cout<<"Cycle present"<<endl;
    }else{
        cout<<"Cycle absent"<<endl;
    }

    return 0;
}