#include <bits/stdc++.h>

/*
10 10
#S######.#
......#..#
.#.##.##.#
.#........
##.##.####
....#....#
.#######.#
....#.....
.####.###.
 */


using namespace std;

const int INF = 1000000;
const int MAX_N = 10;
const int MAX_M = 10;
typedef pair<int, int> P;
char maze[MAX_N][MAX_M];
int N, M;
int sx, sy;
int gx, gy;
int d[MAX_N][MAX_M];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs() {
    queue<P> que;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            d[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while (que.size()) {
        P p = que.front();
        que.pop();
        if (p.first == gx && p.second == gy) break;
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i], ny = p.second + dy[i]


        }
    }


}

int main() {
    return 0;
}
