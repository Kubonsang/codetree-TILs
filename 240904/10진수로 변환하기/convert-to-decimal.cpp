#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input;
    vector<int> arr;
    int answer = 0;
    cin >> input;
    
    for(int i = 0; i < input.length(); i++){
        arr.push_back((int)(input[i]) - '0');
    }

    for(int i = 0; i < arr.size(); i++){
        answer = answer * 2 + arr[i];
    }
    cout << answer;
    


    return 0;
}