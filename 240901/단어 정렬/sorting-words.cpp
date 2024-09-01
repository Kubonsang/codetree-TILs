#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string arr[101];
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sort(arr, arr + size);
    for(string item : arr){
        cout << item << endl;
    }

    return 0;
}