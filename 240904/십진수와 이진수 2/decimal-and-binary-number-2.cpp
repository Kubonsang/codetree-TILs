#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string input;
    vector<int> digit, changed;
    int output = 0;
    cin >> input;
    for(int i = 0; i < input.length(); i++){
        digit.push_back((int)(input[i] - '0'));
    }

    for(int i = 0; i < input.length(); i++){
        output = output * 2 + digit[i];
    }

    output *= 17;

    while(true){
        changed.push_back(output % 2);
        output /= 2;
        if(output == 0){
            break;
        }
    }

    int ub = changed.size();
    for(int i = 0; i < ub; i++){
        cout << changed.back();
        changed.pop_back();
    }

    return 0;
}