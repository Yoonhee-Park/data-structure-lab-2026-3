#include "AdjMatGraph.h"

int main()
{
    SrchAMGraph g1;

    for (int i = 0; i < 7; i++)
        g1.insertVertex('A' + i);

    g1.insertEdge(0, 1);
    g1.insertEdge(0, 3);
    g1.insertEdge(1, 2);
    g1.insertEdge(1, 3);
    g1.insertEdge(2, 3);
    g1.insertEdge(4, 5);
    g1.insertEdge(3, 6);
    g1.insertEdge(4, 6);

    printf("인접 행렬로 표현한 그래프\n");
    g1.display();

    FILE* fp;
    fopen_s(&fp, "graph.txt", "w");

    if (fp != NULL) {
        g1.display(fp);
        fclose(fp);
    }

    // =========================
    // DFS
    // =========================
    printf("DFS ==> ");
    g1.resetVisited();
    g1.DFS(0);
    printf("\n\n");

    // =========================
    // BFS
    // =========================
    printf("BFS ==> ");
    g1.resetVisited();
    g1.BFS(0);
    printf("\n\n");

    // =========================
    // 가중치 그래프
    // =========================
    WGraph g2;
    g2.load("graph.txt");

    printf("가중치 그래프 출력\n");
    g2.display();

    return 0;
}