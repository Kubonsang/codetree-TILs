#include <iostream>
#include <vector>
using namespace std;

int n, m, x = 0, y = 0, i, dir = 0;
vector<vector<int>> arr(100, vector<int>(100));
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

bool isInvalidMove(int dy, int dx){
    return !((x + dx >= 0 && x + dx < m) && (y + dy >= 0 && y + dy < n) && arr[y + dy][x + dx] == 0);
}

int main() {
    cin >> n >> m;

    for(i = 1; i <= m * n; i++){
        if(isInvalidMove(dy[dir], dx[dir])){
            dir = (dir + 1) % 4;
        }
        arr[y][x] = i;
        y += dy[dir];
        x += dx[dir];
    }

    for(int j = 0; j < n; j++){
        for(int k = 0; k < m; k++){
            cout << arr[j][k] << " ";
        }
        cout << endl;
    }

    return 0;
}