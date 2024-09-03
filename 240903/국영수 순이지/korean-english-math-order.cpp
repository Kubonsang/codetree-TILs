#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int size;
    cin >> size;
    int temp1, temp2, temp3;
    string temp;

    tuple<int, int, int, string> arr[10];
    for(int i = 0; i < size; i++){
        cin >> temp >> temp1 >> temp2 >> temp3;
        arr[i] = make_tuple(-temp1, -temp2, -temp3, temp);
    }

    sort(arr, arr + size);

    for(int i = 0; i < size; i++){
        tie(temp1, temp2, temp3, temp) = arr[i];
        cout << temp << " " << -temp1 << " " << -temp2 << " " << -temp3 << endl;
    }



}