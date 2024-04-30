#include <iostream>
using namespace std;

int arr[100];
int size;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int min, temp;
    for(int i = 0; i < size; i++){
        min = i;
        for(int j = i; j < size; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}