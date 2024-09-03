#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    int size, height, weight;
    string name;
    tuple<int, int, string> arr[10];

    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> name >> height >> weight;
        arr[i] = make_tuple(height, -weight, name);
    }

    sort(arr, arr + size);

    for(int i = 0; i < size; i++){
        tie(height, weight, name) = arr[i];
        cout << name << " " << height << " " << -weight << endl;
    }

    return 0;
}