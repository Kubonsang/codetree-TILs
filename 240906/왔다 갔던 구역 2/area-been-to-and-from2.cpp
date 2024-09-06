#include <iostream>
#include <vector>
using namespace std;

int main() {
    int currentPos = 1000, deltaPos, n;
    char direct;
    vector<int> arr(2001);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> deltaPos >> direct;
        if(direct == 'L'){
            deltaPos *= -1;
        }

        if(direct == 'L'){
            for(int j = currentPos + deltaPos; j < currentPos; j++) {
                arr[j]++;
            }
        }
        else{
            for(int j = currentPos; j < currentPos + deltaPos; j++) {
                arr[j]++;
            }
        }

        currentPos += deltaPos;
    }

    int size = 0, startPos, endPos;
    bool continous = false;
    for(int i = 0; i < 2001; i++){
        if(arr[i] >= 2){
            size++;
        }




    }

    cout << size;

    return 0;
}