#include <iostream>
using namespace std;
int arr[100];
int size;

void bubbleSort(){
    
    bool sorted = true;
    int temp;

    do{
        sorted = true;
        for(int i = 0; i < size - 1; i++){
            if(arr[i] > arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sorted = false;
            }
        }
    }while(sorted == false);
}

int main() {
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    bubbleSort();
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}