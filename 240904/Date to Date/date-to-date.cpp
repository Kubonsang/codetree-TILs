#include <iostream>
using namespace std;

int main() {
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, m2, d1, d2;
    int answer = 1;

    cin >> m1 >> d1 >> m2 >> d2;

    while(!(m1 == m2 && d1 == d2)){
        answer++;
        d1++;
        if(d1 > months[m1]){
            d1 = 1;
            m1++;
        }
    }

    cout << answer;
    

    return 0;
}