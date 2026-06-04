#pragma once

#define MAX_VTXS 20
#define INF 9999

#include <stdio.h>
#include <queue>

class AdjMatGraph {
protected:
    int  size;
    char vertices[MAX_VTXS];
    int  adj[MAX_VTXS][MAX_VTXS];

public:
    AdjMatGraph() {
        reset();
    }

    char getVertex(int i) {
        return vertices[i];
    }

    int getEdge(int i, int j) {
        return adj[i][j];
    }

    void setEdge(int i, int j, int val) {
        adj[i][j] = val;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size >= MAX_VTXS;
    }

    virtual void reset() {
        size = 0;

        for (int i = 0; i < MAX_VTXS; i++) {
            for (int j = 0; j < MAX_VTXS; j++) {
                adj[i][j] = 0;
            }
        }
    }

    void insertVertex(char name) {
        if (!isFull()) {
            vertices[size++] = name;
        }
        else {
            printf("Error: 그래프 정점 개수 초과\n");
        }
    }

    virtual void insertEdge(int u, int v) {
        setEdge(u, v, 1);
        setEdge(v, u, 1);
    }

    void display(FILE* fp = stdout) {
        fprintf(fp, "%d\n", size);

        for (int i = 0; i < size; i++) {
            fprintf(fp, "%c ", getVertex(i));

            for (int j = 0; j < size; j++) {
                fprintf(fp, "%4d", getEdge(i, j));
            }

            fprintf(fp, "\n");
        }
    }
};

////////////////////////////////////////////////////////////
// 탐색 그래프
////////////////////////////////////////////////////////////

class SrchAMGraph : public AdjMatGraph {
protected:
    bool visited[MAX_VTXS];

public:
    void resetVisited() {
        for (int i = 0; i < size; i++) {
            visited[i] = false;
        }
    }

    bool isLinked(int u, int v) {
        return getEdge(u, v) != 0;
    }

    // DFS
    void DFS(int v) {
        visited[v] = true;
        printf("%c ", getVertex(v));

        for (int w = 0; w < size; w++) {
            if (isLinked(v, w) && !visited[w]) {
                DFS(w);
            }
        }
    }

    // BFS
    void BFS(int v) {
        std::queue<int> q;

        visited[v] = true;
        q.push(v);

        while (!q.empty()) {
            int v = q.front();
            q.pop();

            printf("%c ", getVertex(v));

            for (int w = 0; w < size; w++) {
                if (isLinked(v, w) && !visited[w]) {
                    visited[w] = true;
                    q.push(w);
                }
            }
        }
    }
};

////////////////////////////////////////////////////////////
// 가중치 그래프
////////////////////////////////////////////////////////////

class WGraph : public AdjMatGraph {

public:

    void reset() override {
        size = 0;

        for (int i = 0; i < MAX_VTXS; i++) {
            for (int j = 0; j < MAX_VTXS; j++) {

                if (i == j)
                    adj[i][j] = 0;
                else
                    adj[i][j] = INF;
            }
        }
    }

    void insertEdge(int u, int v, int weight) {
        if (weight > INF)
            weight = INF;

        setEdge(u, v, weight);
    }

    bool hasEdge(int i, int j) {
        return (getEdge(i, j) < INF);
    }

    void load(const char* filename) {
        FILE* fp;
        fopen_s(&fp, filename, "r");

        if (fp != NULL) {
            int n, val;

            fscanf_s(fp, "%d", &n);

            for (int i = 0; i < n; i++) {
                char str[80];

                fscanf_s(fp, "%s", str, sizeof(str));

                insertVertex(str[0]);

                for (int j = 0; j < n; j++) {
                    fscanf_s(fp, "%d", &val);
                    insertEdge(i, j, val);
                }
            }

            fclose(fp);
        }
    }
};