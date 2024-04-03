#include <iostream>
using namespace std;
//맨 왼쪽 위에서 부터 1, 2, 3... 9번 계산.
int dx[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int dy[9] = {1, 1, 1, 0, 0, 0, -1, -1, -1};

int arr[20][20];

int check(int y, int x){
    int sum = 0;
    for(int i = 0; i < 9; i++){
        sum += arr[y + dy[i]][x + dx[i]];
    }
    return sum;
}

int main() {
    int x = 1, y = 1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int maxValue = 0;
    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < n - 1; j++){
            if(check(i, j) > maxValue) maxValue = check(i, j);
        }
    }
    cout << maxValue;
    return 0;
}