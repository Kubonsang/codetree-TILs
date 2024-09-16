#include <iostream>
#include <vector>
using namespace std;

bool isInside(int x, int y, int n){
    return (x >= 0 && x < n) && (y >= 0 && y < n);
}

int main() {
    int n, x = 0, y = 0, cnt = 0, point = 0;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            x = j;
            y = i;
            if(isInside(x + 1, y, n)){
                cnt += arr[x + 1][y];
            }
            if(isInside(x, y + 1, n)){
                cnt += arr[x][y + 1];
            }
            if(isInside(x - 1, y, n)){
                cnt += arr[x - 1][y];
            }
            if(isInside(x, y - 1, n)){
                cnt += arr[x][y - 1];
            }
            if(cnt >= 3){
                point++;
            }
            cnt = 0;
        }
    }

    cout << point;

    return 0;
}