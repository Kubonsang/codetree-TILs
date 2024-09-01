#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int size, arr[101];
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sort(arr, arr + size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
    sort(arr, arr + size, greater<int>());
    for(int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}