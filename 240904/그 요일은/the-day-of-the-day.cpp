#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, m2, d1, d2;
    int months[13] = {
        0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    string days[7] = {
        "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"
    };
    string input;
    int cnt = 0, answer = 0;
    cin >> m1 >> d1 >> m2 >> d2 >> input;

    while(!(m1 == m2 && d1 == d2)){
        if(days[cnt] == input){
            answer++;
        }
        d1++;
        cnt++;
        if(d1 > months[m1]){
            m1++;
            d1 = 1;
        }
        cnt = cnt % 7;
    }
    if(days[cnt] == input){
        answer++;
    }

    cout << answer;
    return 0;
}