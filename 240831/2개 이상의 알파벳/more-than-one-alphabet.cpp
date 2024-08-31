#include <iostream>
#include <string>
using namespace std;

void aaa(string a){
    for(int i = 0; i < a.length(); i++){
        if(a[i] != a[0]){
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    aaa(a);
    return 0;
}