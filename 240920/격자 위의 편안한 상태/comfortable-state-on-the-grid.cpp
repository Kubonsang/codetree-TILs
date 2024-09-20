#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr(100, vector<int>(100));
int n, m, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


bool isComfortable(int r, int c){

    int _count = 0;
    for(int i = 0; i < 4; i++){
        if(!((r + dy[i] >= 0 && r + dy[i] < n) && (c + dx[i] >= 0 && c + dx[i] < n))){
            continue;
        }
        if(arr[r + dy[i]][c + dx[i]] == 1){
            _count++;
        }
    }
    return _count == 3;
}

int main() {
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            arr[i][j] = 0;
        }
    }
    int r, c;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> r >> c;
        r--;
        c--;
        arr[r][c] = 1;
        cout << (isComfortable(r, c) ? "1" : "0") << endl;
    }
    return 0;
}