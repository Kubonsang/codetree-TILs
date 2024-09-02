#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int size, arr[101];
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    vector<int> temp;
    for(int i = 0; i < size; i++){
        if(i % 2 == 0){
            temp.resize(i + 1);
            for(int j = 0; j <= i; j++){
                temp[j] = arr[j];
            }
            sort(temp.begin(), temp.end());
            cout << temp[i / 2] << " ";
            temp.clear();
        }
    }



    return 0;
}