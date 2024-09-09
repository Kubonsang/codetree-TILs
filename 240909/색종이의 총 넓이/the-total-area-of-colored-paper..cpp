#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, y, n;
    vector<vector<int>> arr(201, vector<int>(201));
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        x += 100;
        y += 100;
        for(int j = y; j < y + 8; j++){
            for(int k = x; k < x + 8; k++){
                arr[j][k] = 1;
            }
        }
    }

    int size = 0;
    for(vector<int> linerD : arr){
        for(int item : linerD)
            size += item;
    }
    cout << size;

    return 0;
}