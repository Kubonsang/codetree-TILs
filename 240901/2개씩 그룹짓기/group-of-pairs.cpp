#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int size, arr[1001];
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sort(arr, arr + size);

    cout << arr[0] + arr[size - 1];

    return 0;
}