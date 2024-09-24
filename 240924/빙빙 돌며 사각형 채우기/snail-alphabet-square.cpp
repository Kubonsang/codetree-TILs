#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> arr(100, vector<char>(100)) ;
int n, m, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}, x = 0, y = 0, state = 0;
bool isInvalidMove(int dy, int dx){
    return !((x + dx >= 0 && x + dx < m) && (y + dy >= 0 && y + dy < n) && arr[y + dy][x + dx] == '@');
}



int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = '@';
        }
    }


    for(int k = 0; k < n * m; k++){
        const int c = (k) % 26;
        arr[y][x] = 'A' + c;
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