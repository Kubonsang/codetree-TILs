#include <iostream>
using namespace std;

int arr[100];
int size;

int main() {
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int j;
    int key;
    for(int i = 1; i < size; i++){
        j = i - 1;
        key = arr[j + 1];

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            arr[j] = key;
            j--;
        }

    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}