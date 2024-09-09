#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x1, x2, y1, y2;
    vector<vector<int>> arr(2001, vector<int>(2001));

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    x2 += 1000;
    y1 += 1000;
    y2 += 1000;

    for(int i = y1; i < y2; i++){
        for(int j = x1; j < x2; j++){
            arr[i][j] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    x2 += 1000;
    y1 += 1000;
    y2 += 1000;

    for(int i = y1; i < y2; i++){
        for(int j = x1; j < x2; j++){
            arr[i][j] = 0;
        }
    }

    int minimumX = 2001, minimumY = 2001, maximumX = 0, maximumY = 0;
    for(int i = 0; i < 2001; i++){
        for(int j = 0; j < 2001; j++){
            if(arr[i][j] == 1){
                if(j < minimumX){
                    minimumX = j;
                }
                else if(i < minimumY){
                    minimumY = i;
                }
                else if(j > maximumX){
                    maximumX = j;
                }
                else if(i > maximumY){
                    maximumY = i;
                }
            }
        }
    }
    for(int i = minimumY; i <= maximumY; i++){
        for(int j = minimumX; j <= maximumX; j++){
            arr[i][j] = 1;
        }
    }



    int size = 0;

    for(vector<int> linerD : arr){
        for(int item : linerD){
            size += item;
        }
    }

    cout << size;

    return 0;
}