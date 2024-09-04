#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> digits;

    cin >> n;

    while(n > 0){
        digits.push_back(n % 2);
        n /= 2;
    }

    int upperbound = digits.size();

    for(int i = 0; i < upperbound; i++){
        cout << digits.back();
        digits.pop_back();
    }

    return 0;
}