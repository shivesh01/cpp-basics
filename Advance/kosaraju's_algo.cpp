// Kosaraju's algorithm to find strongly connected components in C++
#include <iostream>
#include <list>
#include <stack>

using namespace std;

class Graph{
    int v;
    list<int> *adj;
    void fillOrder(int s, bool visitedV[], stack<int> &Stack);
    void DFS(int s, bool visitedV[]);

    public:
    Graph(int V);
    void addEdge(int s, int d);
    void printSCC();
    Graph transpose();

};