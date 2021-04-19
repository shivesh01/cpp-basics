// Dijkstra's algo in C++

// Pseudo Code

// function dijkstra(G, S)
//     for each vertex V in G
//         distance[V] <- infinite
//         previous[V] <- NULL
//         If V != S, add V to Priority Queue Q
//     distance[S] <- 0

//     while Q IS NOT EMPTY
//         U <- Extract MIN from Q
//         for each unvisited neighbour V of U
//             tempDistance <- distance[U] + edge_weight(U, V)
//             if tempDistance < distance[V]
//                 distance[V] <- tempDistance
//                 previous[V] <- U
//     return distance[], previous[]

// Dijkstra's Algorithm in C++

#include <iostream>
#include <vector>

#define INT_MAX 10000000

using namespace std;

void DijkstrasTest();

int main()
{
    DijkstrasTest();
    return 0;
}

class Node;
class Edge;

void Dijkstras();
vector<Node *> *AdjacentRemainingNodes(Node *node);
Node *ExtractSmallest(vector<Node *> &nodes);
int Distance(Node *node1, Node *node2);
bool Contains(vector<Node *> &nodes, Node *node);
void PrintShortestRouteTo(Node *destination);

vector<Node *> nodes;
vector<Edge *> edges;

class Node
{
public:
    Node(char id)
        : id(id), previous(NULL), distanceFromStart(INT_MAX)
    {
        nodes.push_back(this);
    }

public:
    char id;
    Node *previous;
    int distanceFromStart;
};

class Edge
{
public:
    Edge(Node *node1, Node *node2, int distance)
        : node1(node1), node2(node2), distance(distance)
    {
        edges.push_back(this);
    }
    bool Connects(Node *node1, Node *node2)
    {
        return (
            (node1 == this->node1 &&
             node2 == this->node2) ||
            (node1 == this->node2 &&
             node2 == this->node1));
    }

public:
    Node *node1;
    Node *node2;
    int distance;
};

///////////////////
void DijkstrasTest()
{
    Node *a = new Node('a');
    Node *b = new Node('b');
    Node *c = new Node('c');
    Node *d = new Node('d');
    Node *e = new Node('e');
    Node *f = new Node('f');
    Node *g = new Node('g');

    Edge *e1 = new Edge(a, c, 1);
    Edge *e2 = new Edge(a, d, 2);
    Edge *e3 = new Edge(b, c, 2);
    Edge *e4 = new Edge(c, d, 1);
    Edge *e5 = new Edge(b, f, 3);
    Edge *e6 = new Edge(c, e, 3);
    Edge *e7 = new Edge(e, f, 2);
    Edge *e8 = new Edge(d, g, 1);
    Edge *e9 = new Edge(g, f, 1);

    a->distanceFromStart = 0; // set start node
    Dijkstras();
    PrintShortestRouteTo(f);
}
