#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size, k, arr[1001];
    cin >> size >> k;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sort(arr, arr + size);
    cout << arr[k - 1];

    return 0;
}