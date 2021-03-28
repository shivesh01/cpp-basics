// Adjacency List representation in C++

#include <bits/stdc++.h>
using namespace std;

// Add edge
void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}
// Print the graph
void printGraph(vector<int> adj[], int v)
{
    for (int d = 0; d < v; ++d)
    {
        cout << "\n vertex"
             << d << ":";
        for (auto x : adj[d])
            cout << "->" << x;
        printf("\n");
    }
}

int main()
{
    int v = 5;

    // Create a graph
    vector<int> adj[v];

    // Add edges
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    addEdge(adj, 0, 4);
    printGraph(adj, v);
}