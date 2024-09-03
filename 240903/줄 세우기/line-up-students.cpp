#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;




int main() {
    int size, temp1, temp2, temp3;
    tuple<int, int, int> arr[1000];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> temp1 >> temp2;
        arr[i] = make_tuple(-temp1, -temp2, i + 1);
    }

    sort(arr, arr + size);

    for(int i = 0; i < size; i++){
        tie(temp1, temp2, temp3) = arr[i];

        cout << -temp1 << " " << -temp2 << " " << temp3 << endl;
    }


    return 0;
}