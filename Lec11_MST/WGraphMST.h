#pragma once
#include <stdio.h>

#define MAX_VTXS 20
#define MAX_HEAP_SIZE 100
#define INF 9999

// =========================
// Heap Node
// =========================
class HeapNode {
private:
    int key;
    int v1;
    int v2;

public:
    HeapNode() {
        key = 0;
        v1 = v2 = -1;
    }

    HeapNode(int k, int u, int v) : key(k), v1(u), v2(v) {}

    void set(int k, int u, int v) {
        key = k;
        v1 = u;
        v2 = v;
    }

    int getKey() { return key; }
    int getV1() { return v1; }
    int getV2() { return v2; }
};

// =========================
// Min Heap
// =========================
class MinHeap {
private:
    HeapNode node[MAX_HEAP_SIZE];
    int size;

public:
    MinHeap() { size = 0; }

    bool isEmpty() { return size == 0; }
    bool isFull() { return size == MAX_HEAP_SIZE - 1; }

    void insert(int key, int u, int v) {
        if (isFull()) return;

        int i = ++size;

        while (i != 1 && key < node[i / 2].getKey()) {
            node[i] = node[i / 2];
            i /= 2;
        }

        node[i].set(key, u, v);
    }

    HeapNode remove() {
        HeapNode item = node[1];
        HeapNode temp = node[size--];

        int parent = 1;
        int child = 2;

        while (child <= size) {
            if (child < size &&
                node[child].getKey() > node[child + 1].getKey()) {
                child++;
            }

            if (temp.getKey() <= node[child].getKey())
                break;

            node[parent] = node[child];

            parent = child;
            child *= 2;
        }

        node[parent] = temp;

        return item;
    }
};

// =========================
// Union-Find
// =========================
class VertexSets {
private:
    int parent[MAX_VTXS];

public:
    VertexSets(int n) {
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int findSet(int v) {
        while (parent[v] != v)
            v = parent[v];
        return v;
    }

    void unionSets(int s1, int s2) {
        parent[s1] = s2;
    }
};

// =========================
// Graph + MST
// =========================
class WGraphMST {
private:
    int size;
    char vertices[MAX_VTXS];
    int adj[MAX_VTXS][MAX_VTXS];

public:
    WGraphMST() { reset(); }

    void reset() {
        size = 0;

        for (int i = 0; i < MAX_VTXS; i++)
            for (int j = 0; j < MAX_VTXS; j++)
                adj[i][j] = INF;
    }

    void insertVertex(char v) {
        vertices[size++] = v;
    }

    void setEdge(int i, int j, int w) {
        adj[i][j] = w;
    }

    int getEdge(int i, int j) {
        return adj[i][j];
    }

    bool hasEdge(int i, int j) {
        return adj[i][j] != INF;
    }

    char getVertex(int i) {
        return vertices[i];
    }

    void load();      // 소스파일에서 구현
    void Kruskal();   // 소스파일에서 구현
};