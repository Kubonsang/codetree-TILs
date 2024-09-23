#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr(100, vector<int>(100));
int n, m, dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, x = 0, y = 0, state = 0;
bool isInvalidMove(int dy, int dx){
    return !((x + dx >= 0 && x + dx < m) && (y + dy >= 0 && y + dy < n) && arr[y + dy][x + dx] == 0);
}



int main() {
    cin >> n >> m;
    for(int k = 1; k <= n * m; k++){
        arr[y][x] = k;
        if(isInvalidMove(dy[state], dx[state])){
            state++;
            if(state == 4){
                state = 0;
            }
        }
        x += dx[state];
        y += dy[state];
        }
    
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}