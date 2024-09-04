#include <iostream>
#include <string>
using namespace std;

int main() {
    string days[7] = {
        "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"
    };
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, m2, d1, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int answer = 0;


    if((m1 == m2 && d1 < d2) || (m1 < m2)){
        while(!(m1 == m2 && d1 == d2)){
            answer++;
            d1++;
            if(d1 > months[m1]){
                m1++;
                d1 = 1;
            }
            answer = answer % 7;
        }
    }
    else if((m1 == m2 && d1 > d2) || (m2 < m1)){
        while(!(m1 == m2 && d1 == d2)){
            answer--;
            d2++;
            if(d2 > months[m2]){
                m2++;
                d2 = 1;
            }
            if(answer == -1){
                answer = 6;
            }
        }
    }
    cout << days[answer];


    return 0;
}