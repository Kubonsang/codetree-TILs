#include <iostream>
using namespace std;

void a(int *arr, int size){
    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            arr[i] *= -1;
        }
    }
}

int main() {
    int size, arr[51];
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    a(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}