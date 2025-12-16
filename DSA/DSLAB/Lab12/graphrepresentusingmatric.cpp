#include<iostream>
using namespace std;
#define MAX 100
class Graph {
    int adjMatrix[MAX][MAX];
    int numVertices;
public:
    Graph(int vertices) {
        numVertices = vertices;
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                adjMatrix[i][j] = 0;
            }
        }
    }
    void addEdge(int src, int dest) {
        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1; // For undirected graph
    }
    void displayMatrix() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int vertices, edges, src, dest;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    Graph g(vertices);
    cout << "Enter number of edges: ";
    cin >> edges;
    cout << "Enter edges (source destination):" << endl;
    for (int i = 0; i < edges; i++) {
        cin >> src >> dest;
        g.addEdge(src, dest);
    }
    g.displayMatrix();
    return 0;
}