#include <iostream>
#include <vector>
using namespace std;

bool isInside(int x, int y, int n){
    return (x >= 1 && x <= n) && (y >= 1 && y <= n);
}

int main() {
    int n, t, r, c, dx[4] = {1, 0, -1, 0}, dy[4]= {0, 1, 0, -1}, dir;
    char direct;
    cin >> n >> t >> r >> c >> direct;

    vector<vector<int>> arr(n + 1, vector<int>(n + 1));
    arr[r][c] = 1;

    if(direct == 'U'){
        dir = 3;
    }
    else if(direct == 'D'){
        dir = 1;
    }
    else if(direct == 'R'){
        dir = 0;
    }
    else if(direct == 'L'){
        dir = 2;
    }

    for(int i = 0; i < t; i++){
        if(!isInside(c + dx[dir], r + dy[dir], n)){
            dir = (dir + 2) % 4;
        }
        else{
            r += dy[dir];
            c += dx[dir];
        }

    }

    cout << r << " " << c;

    return 0;
}