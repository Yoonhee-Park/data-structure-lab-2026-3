#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

#define MAX_VTXS 20
#define INF 9999

class WGraphPrim {
private:
    int size;
    char vertices[MAX_VTXS];
    int adj[MAX_VTXS][MAX_VTXS];

public:
    WGraphPrim() {
        size = 0;

        for (int i = 0; i < MAX_VTXS; i++) {
            for (int j = 0; j < MAX_VTXS; j++) {
                adj[i][j] = INF;
            }
        }
    }

    //-------------------------------------------------
    // 파일 읽기
    //-------------------------------------------------
    void load(const char* filename) {
        ifstream fin(filename);

        if (!fin) {
            cout << "파일 열기 실패!" << endl;
            return;
        }

        string str;

        fin >> size;

        for (int i = 0; i < size; i++)
            fin >> vertices[i];

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {

                fin >> str;

                if (str == "INF")
                    adj[i][j] = INF;
                else
                    adj[i][j] = stoi(str);
            }
        }

        fin.close();

        cout << filename << " 파일 생성 및 저장 완료" << endl
            << endl;
    }

    //-------------------------------------------------
    // 그래프 출력
    //-------------------------------------------------
    void display() {
        cout << "     ";

        for (int i = 0; i < size; i++)
            cout << setw(5) << vertices[i];

        cout << endl;

        for (int i = 0; i < size; i++) {

            cout << setw(3) << vertices[i];

            for (int j = 0; j < size; j++) {

                if (adj[i][j] == INF)
                    cout << setw(5) << "INF";
                else
                    cout << setw(5) << adj[i][j];
            }
            cout << endl;
        }

        cout << endl;
    }

    //-------------------------------------------------
    // Prim MST
    //-------------------------------------------------
    void Prim(int start = 0) {

        bool selected[MAX_VTXS] = { false };

        selected[start] = true;

        cout << "Prim 알고리즘 시작 정점: "
            << vertices[start] << endl
            << endl;

        cout << "시작 정점 선택 : "
            << vertices[start] << endl;

        int edgeCount = 0;
        int totalCost = 0;

        while (edgeCount < size - 1) {

            int min = INF;
            int from = -1;
            int to = -1;

            for (int i = 0; i < size; i++) {

                if (!selected[i])
                    continue;

                for (int j = 0; j < size; j++) {

                    if (selected[j])
                        continue;

                    if (adj[i][j] < min) {
                        min = adj[i][j];
                        from = i;
                        to = j;
                    }
                }
            }

            if (to == -1)
                break;

            cout << "간선 추가 : "
                << vertices[from]
                << " - "
                << vertices[to]
                << " (비용:"
                << adj[from][to]
                << ")"
                << endl;

            selected[to] = true;

            totalCost += adj[from][to];
            edgeCount++;
        }

        cout << endl;
        cout << "MST 간선 수 : "
            << edgeCount << endl;

        cout << "MST 총 비용 : "
            << totalCost << endl;
    }
};