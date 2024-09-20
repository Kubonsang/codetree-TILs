#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr(100, vector<int>(100));
int n, m, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

bool isInvalid(int r, int c){
    return (r == 0 || c == 0) && (r == n - 1 && c == n - 1);
}

bool isComfortable(int r, int c){
    int _count = 0;
    if(isInvalid(r, c)){
        return false;
    }
    for(int i = 0; i < 4; i++){
        if(arr[r + dy[i]][c + dx[i]] == 1){
            _count++;
        }
    }
    return _count == 3;
}

int main() {
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