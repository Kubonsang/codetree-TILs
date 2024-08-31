#include <iostream>
using namespace std;

void getAnswer(int a, int b){
    int answer;
    for(int i = (a > b) ? b : a; i <= a * b; i++){
        if(i % a == 0 && i % b == 0){
            answer = i;
            break;
        }
    }
    cout << answer;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    getAnswer(a, b);
    return 0;
}