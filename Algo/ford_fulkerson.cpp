// Ford-Fulkerson algorithm in C++

#include <limits.h>
#include <string.h>

#include <iostream>
#include <queue>
using namespace std;

#define V 6


// Using BFS as a searching algorithm
bool bfs(int rGraph[V][V], int s, int t, int parent[]){
    bool visited[v];
    memset(visited, 0, sizeof(visited));

    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for (int v = 0; v<V; v++){
            if (visited[v] == false && rGraph[u][v]>0){
                q.push(v);
                parent[v] = u;
                visited[v] = true;

            }
        }
    }
    return (visited[t] == true);
}