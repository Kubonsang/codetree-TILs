#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    int size, h, w, n;
    cin >> size;

    tuple<int, int, int> arr[1000];

    for(int i = 0; i < size; i++){
        cin >> h >> w;
        arr[i] = make_tuple(h, -w, i + 1);
    }

    sort(arr, arr + size);

    for(int i = 0; i < size; i++){
        tie(h, w, n) = arr[i];
        cout << h << " " << -w << " " << n << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}