#include <iostream>
#include <vector>
using namespace std;

enum {
    RIGHT = 0,
    DOWN = 1,
    LEFT = 2,
    UP = 3
};

int n, k, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}, r = 0, c = 0, state = 0;
vector<vector<char>> arr(1000, vector<char>(1000));


void getDirectInfo(int row, int col){
    if(arr[row][col] == '/'){
        if(state == RIGHT){
            state = UP;
        }
        else if (state == DOWN){
            state = LEFT;
        }
        else if (state == LEFT){
            state = DOWN;
        }
        else if (state == UP){
            state = RIGHT;
        }
    }
    else if (arr[row][col] == '\\'){
        if(state == RIGHT){
            state = DOWN;
        }
        else if (state == DOWN){
            state = RIGHT;
        }
        else if (state == LEFT){
            state = UP;
        }
        else if (state == UP){
            state = LEFT;
        }
    }
}


int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cin >> k;

    for(int i = 1; i < k; i++){
        if(!((r + dy[state] >= 0 && r + dy[state] < n) && (c + dx[state] >= 0 && c + dx[state] < n))){
            state = (state + 1) % 4;
        }
        r += dy[state];
        c += dx[state];
    }
    
    state = (state + 1) % 4;

    int _answer = 0;
    while(true){
        _answer++;
        getDirectInfo(r, c);
        r += dy[state];
        c += dx[state];
        if (!((r >= 0 && r < n) && (c >= 0 && c < n))){
            break;
        }
    }

    cout << _answer;


    return 0;
}