#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size, arr1[101], arr2[101];
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < size; i++){
        cin >> arr2[i];
    }

    sort(arr1, arr1 + size);
    sort(arr2, arr2 + size);

    for(int i = 0; i < size; i++){
        if(arr1[i] != arr2[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}