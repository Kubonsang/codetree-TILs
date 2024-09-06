#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> arr(200001);

int main() {
    int currentPos = 100000, deltaPos, n;
    char direction;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> deltaPos >> direction;
        deltaPos -= 1;

        if(direction == 'L'){
            deltaPos *= -1;
        }
        if(direction == 'L'){
            for(int j = currentPos + deltaPos; j <= currentPos; j++){
                arr[j] += 'W';
            }
        }
        else {
            for (int j = currentPos; j <= currentPos + deltaPos; j++){
                arr[j] += 'B';
            }
        }
        currentPos += deltaPos;
    }
    int b = 0, w = 0, g = 0;
    int ba = 0, wa = 0;
    for(int i = 0; i < 200001; i++){
        for(int j = 0; j < arr[i].length(); j++){
            if(arr[i][j] == 'B'){
                ba++;
            }
            else if(arr[i][j] == 'W'){
                wa++;
            }
        }
        if(!(ba >= 2 && wa >= 2)){
            if(arr[i].back() == 'B'){
                b++;
            }
            else if(arr[i].back() == 'W'){
                w++;
            }
        }
        else{
            g++;
        }
        wa = 0;
        ba = 0;
    }

    cout << w << ' ' << b << ' ' << g;


    return 0;
}