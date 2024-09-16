#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, i = 0, x = 0, y = 0;
    cin >> input;

    for(char item : input){
        if(item == 'L'){
            i -= 1;
            if(i == -1){
                i = 3;
            }
        }
        else if (item == 'R'){
            i = (i + 1) % 4;
        }
        else if (item == 'F'){
            x += dx[i];
            y += dy[i];
        }
    }

    cout << x << " " << y;

    return 0;
}