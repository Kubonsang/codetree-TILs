#include <iostream>
using namespace std;

int main() {
    int aDay = 60 * 24, aHour = 60;

    int inputD, inputH, inputM, answer = 0;

    cin >> inputD >> inputH >> inputM;

    if(inputD == 11 && inputH < 11){
        cout << -1;
        return 0;
    }
    if(inputD == 11 && inputH == 11 && inputM < 11){
        cout << -1;
        return 0;
    }


    answer += (inputM - 11) + (inputH - 11) * aHour + (inputD - 11) * aDay;
    cout << answer;


    return 0;
}