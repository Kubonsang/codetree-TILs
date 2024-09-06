#include <iostream>
#include <vector>
using namespace std;

vector<char> arr(200001);

int main() {
    int curPos = 100000, deltaPos, n;
    char direct;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> deltaPos >> direct;
        deltaPos -= 1;
        if(direct == 'L'){
            deltaPos *= -1;
        }

        if(direct == 'L'){
            for(int j = curPos + deltaPos; j <= curPos; j++){
                arr[j] = 'W';
            }
        }
        else{
            for(int j = curPos; j <= curPos + deltaPos; j++){
                arr[j] = 'B';
            }
        }
        curPos += deltaPos;
    }

    int w = 0, b = 0;
    for(int i = 0; i < 200001; i++){
        if(arr[i] == 'W'){
            w++;
        }
            
        else if(arr[i] == 'B'){
            b++;
        }
    }

    cout << w << " " << b;

    return 0;
}