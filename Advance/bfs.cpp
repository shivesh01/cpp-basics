// BFS algorithm in C++

//pseudocode
// create a queue Q
//         mark v as visited and put v into Q while Q is non -
//     empty
//         remove the head u of Q
//             mark and enqueue all(unvisited) neighbours of u

#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int numvertices;
    list<int> *adjLists;
    bool *visited;

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void BFS(int startvertex);
};

// Create a graph with given vertices,
// and maintain an adjacency list
Graph::Graph(int vertices)
{
    numvertices = vertices;
    adjLists = new list<int>[vertices];
}

// Add edges to the graph
void Graph::addEdge(int src, int dest)
{
    adjLists[src].push_back(dest);
    adjLists[dest].push_back(src);
}

// BFS algorithm
void Graph::BFS(int startvertex)
{
    visited = new bool[numvertices];
    for (int i = 0; i < numvertices; i++)
        visited[i] = false;

    list<int> queue;

    visited[startvertex] = true;
    queue.push_back(startvertex);

    list<int>::iterator i;

    while (!queue.empty())
    {
        int currvertex = queue.front();
        cout << "Visited " << endl
             << currvertex << " ";
        queue.pop_front();

        for (i = adjLists[currvertex].begin(); i != adjLists[currvertex].end(); ++i)
        {
            int adjvertex = *i;
            if (!visited[adjvertex])
            {
                visited[adjvertex] = true;
                queue.push_back(adjvertex);
            }
        }
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.BFS(2);

    return 0;
}