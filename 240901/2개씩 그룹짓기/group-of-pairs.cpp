#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int size, arr[2001];
    cin >> size;
    for(int i = 0; i < size * 2; i++){
        cin >> arr[i];
    }

    sort(arr, arr + size * 2);

    int max = 0;
    for(int i = 0; i < size * 2; i++){
        if(arr[i] + arr[size * 2 - 1 - i] > max){
            max = arr[i] + arr[size * 2 - 1 - i];
        }
    }
    cout << max;

    return 0;
}