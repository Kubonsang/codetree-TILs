#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a, b, firstNum = 0;
    string n;
    vector<int> arr;
    cin >> a >> b >> n;

    for(int i = 0; i < n.length(); i++){
        firstNum = firstNum * a + (int)(n[i] - '0');
    }

    while(true){
        arr.push_back(firstNum % b);
        firstNum /= b;

        if(firstNum == 0){
            break;
        }

    }

    int ub = arr.size();
    for(int i = 0; i < ub; i++){
        cout << arr.back();
        arr.pop_back();
    }

    return 0;
}