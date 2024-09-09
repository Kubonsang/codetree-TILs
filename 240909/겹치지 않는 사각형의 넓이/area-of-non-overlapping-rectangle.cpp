#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x1, x2, y1, y2;
    vector<vector<int>> arr(2001, vector<int>(2001));

    for(int i = 0; i < 2; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000;
        x2 += 1000;
        y1 += 1000;
        y2 += 1000;
        for(int j = y1; j < y2; j++){
            for(int k = x1; k < x2; k++){
                arr[j][k] = 1;
            }
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    x2 += 1000;
    y1 += 1000;
    y2 += 1000;
    for(int j = y1; j < y2; j++){
        for(int k = x1; k < x2; k++){
            arr[j][k] = 0;
        }
    }
    int size = 0;
    for(int i = 0; i < 2001; i++){
        for(int j = 0; j < 2001; j++){
            if(arr[i][j] == 1){
                size++;
            }
        }
    }
    cout << size;

    return 0;
}