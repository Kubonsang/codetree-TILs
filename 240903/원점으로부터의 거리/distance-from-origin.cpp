#include <iostream>
#include <algorithm>
#include <tuple>
#include <cmath>
using namespace std;

bool cmp(const tuple<int, int, int> &left, const tuple<int, int, int> &right){
    int x1, x2, y1, y2, n1, n2;
    tie(x1, y1, n1) = left;
    tie(x2, y2, n2) = right;
    if(abs(x1) + abs(y1) == abs(x2) + abs(y2)){
        return n1 < n2;
    }
    return abs(x1) + abs(y1) < abs(x2) + abs(y2);
}

int main() {
    int size, x, y, n;
    tuple<int, int, int> arr[1000];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> x >> y;
        arr[i] = make_tuple(x, y, i + 1);
    }

    sort(arr, arr + size, cmp);

    for(int i = 0; i < size; i++){
        tie(x, y, n) = arr[i];
        cout << n << endl;
    }

    
    return 0;
}