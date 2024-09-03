#include <iostream>
#include <algorithm>
#include <tuple>
#include <string>
using namespace std;

int main() {


    
    int size, temp1, temp2;
    string temp3;
    cin >> size;
    tuple<int, int, string> arr[11];
    for(int i = 0; i < size; i++){
        cin >> temp3 >> temp1 >> temp2;
        arr[i] = make_tuple(temp1, temp2, temp3);
    }

    sort(arr, arr + size);

    for(int i = 0; i < size; i++){
        tie(temp1, temp2, temp3) = arr[i];
        cout << temp3 << ' ' << temp1 << " " << temp2 << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}