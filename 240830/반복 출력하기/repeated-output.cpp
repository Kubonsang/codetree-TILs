#include <iostream>
using namespace std;

void printStr(){
    cout << "12345^&*()_" << endl;
}

int main() {
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++){
        printStr();
    }
    return 0;
}