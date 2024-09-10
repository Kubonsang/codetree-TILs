#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x1, x2, y1, y2, n, color;
    vector<vector<int>> arr (201, vector<int>(201));
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        x2 += 100;
        y1 += 100;
        y2 += 100;

        color = i % 2;

        for(int j = y1; j < y2; j++){
            for(int k = x1; k < x2; k++){
                arr[j][k] = color;
            }
        }
    }

    int size = 0;

    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            size += arr[i][j];
        }
    }

    cout << size;



    return 0;
}