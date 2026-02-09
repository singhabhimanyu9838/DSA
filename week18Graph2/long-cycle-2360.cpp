

2360. Longest Cycle in a Graph

You are given a directed graph of n nodes numbered from 0 to n - 1, where each node has at most one outgoing edge.

The graph is represented with a given 0-indexed array edges of size n, indicating that there is a directed edge from node i to node edges[i]. If there is no outgoing edge from node i, then edges[i] == -1.

Return the length of the longest cycle in the graph. If no cycle exists, return -1.

A cycle is a path that starts and ends at the same node.


class Solution {
public:

    void dfs(int node , vector<int>& edges , vector<bool>&vis , vector<bool>&dfsTracker , vector<int>&dist , int currLength , int &longestCycleLength ){
        if(node == -1)return ;
        vis[node] = true;
        dfsTracker[node] = true;
        dist[node] = currLength;

        int nextNode = edges[node];

        if(nextNode != -1){
            if(!vis[nextNode]){
                dfs(nextNode , edges , vis , dfsTracker , dist , currLength + 1 ,longestCycleLength );

            }else if(dfsTracker[nextNode]){
                //cycle is there
                int cycleLength = currLength - dist[nextNode] +1 ;
                longestCycleLength = max(longestCycleLength , cycleLength);
            }
        }
        dfsTracker[node] = false;
    }

    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<bool>vis(n ,0);
        vector<bool>dfsTracker(n ,0);
        vector<int>dist(n , 0);
        int longestCycleLength = -1;

        for(int i =0;i<n;i++){
            if(!vis[i]){
                dfs(i , edges , vis , dfsTracker , dist , 0 ,longestCycleLength );
            }
        }

        return longestCycleLength;

    }
};