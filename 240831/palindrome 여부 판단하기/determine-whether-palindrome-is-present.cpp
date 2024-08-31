#include <iostream>
#include <string>
using namespace std;

void a(string b){
    for(int i = 0; i < b.length(); i++){
        if(b[i] != b[b.length() - (i + 1)]){
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

int main() {
    string c;
    cin >> c;
    a(c);
    return 0;
}