#include <iostream>
using namespace std;

void getGCD(int a, int b){
    int answer;
    
    for(int i = 1; (a > b) ? i <= a : i <= b; i++){
        if(a % i == 0 && b % i == 0)
            answer = i;
    }
    cout << answer;
}

int main() {
    int a, b;
    cin >> a >> b;
    getGCD(a, b);
    return 0;
}