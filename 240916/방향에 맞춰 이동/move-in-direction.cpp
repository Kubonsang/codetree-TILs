#include <iostream>
using namespace std;

int main() {
    int n, d, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}, x = 0, y = 0;

    char direct;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> direct >> d;
        if(direct == 'N'){
            x += d * dx[1];
            y += d * dy[1];
        }
        else if(direct == 'E'){
            x += d * dx[0];
            y += d * dy[0];
        }
        else if(direct == 'S'){
            x += d * dx[3];
            y += d * dy[3];
        }

        else if(direct == 'W'){
            x += d * dx[2];
            y += d * dy[2];
        }
    }
    cout << x << " " << y;
    return 0;
}