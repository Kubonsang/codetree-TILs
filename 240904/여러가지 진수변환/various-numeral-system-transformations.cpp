#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, b;
    vector<int> arr;
    cin >> n >> b;
    while(true){
        arr.push_back(n % b);
        n /= b;
        if(n == 0){
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