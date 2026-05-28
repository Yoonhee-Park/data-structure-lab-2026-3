#include "WGraphMST.h"

// =========================
// 그래프 입력 (예제)
// =========================
void WGraphMST::load() {
    size = 7;

    char v[7] = { 'A','B','C','D','E','F','G' };

    for (int i = 0; i < size; i++)
        vertices[i] = v[i];

    int w[7][7] = {
        {0,1,INF,1,INF,INF,INF},
        {1,0,1,1,INF,INF,INF},
        {INF,1,0,1,INF,INF,INF},
        {1,1,1,0,INF,INF,1},
        {INF,INF,INF,INF,0,1,1},
        {INF,INF,INF,INF,1,0,INF},
        {INF,INF,INF,1,1,INF,0}
    };

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            adj[i][j] = w[i][j];
}

// =========================
// Kruskal MST
// =========================
void WGraphMST::Kruskal() {

    MinHeap heap;

    // 1. 모든 간선 삽입
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (hasEdge(i, j)) {
                heap.insert(getEdge(i, j), i, j);
            }
        }
    }

    VertexSets set(size);
    int edgeAccepted = 0;

    // 2. MST 구성
    while (!heap.isEmpty() && edgeAccepted < size - 1) {

        HeapNode e = heap.remove();

        int uset = set.findSet(e.getV1());
        int vset = set.findSet(e.getV2());

        if (uset != vset) {
            printf("간선 추가: %c - %c (비용:%d)\n",
                getVertex(e.getV1()),
                getVertex(e.getV2()),
                e.getKey());

            set.unionSets(uset, vset);
            edgeAccepted++;
        }
    }
}

// =========================
// main
// =========================
int main() {

    WGraphMST g;

    g.load();

    printf("MST By Kruskal's Algorithm\n");
    g.Kruskal();

    return 0;
}