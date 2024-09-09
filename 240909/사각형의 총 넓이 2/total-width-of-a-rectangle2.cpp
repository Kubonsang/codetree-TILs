#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x1, x2, y1, y2, n, size = 0;
    vector<vector<int>> arr(201, vector<int>(201)); 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        x2 += 100;
        y1 += 100;
        y2 += 100;

        for(int j = y1; j < y2; j++){
            for(int k = x1; k < x2; k++){
                if(arr[j][k] != 1){
                    arr[j][k] = 1;
                    size++;
                }
            }
        }
    }

    cout << size;

    return 0;
}