#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;


class person{
public:
    int height;
    double weight;
    string name;
    person(int h, double w, string n): height(h), weight(w), name(n) {}
    person() {}
};

bool cmp1(const person &left, const person& right){
    return left.height > right.height;
}
bool cmp2(const person &left, const person& right){
    return left.name < right.name;
}

int main() {

    person arr[5];
    int h;
    double w;
    string n;
    for(int i = 0; i< 5; i++){
        cin >> n >> h >> w;
        arr[i] = person(h, w, n);
    }

    sort(arr, arr + 5, cmp2);
    cout << "name" << endl;
    for(int i = 0; i < 5; i++){
        cout << fixed << setprecision(1) << arr[i].name << " " << arr[i].height << " " << arr[i].weight << endl;
    }
    cout << endl;

    sort(arr, arr + 5, cmp1);
    cout << "height" << endl;
    for(int i = 0; i < 5; i++){
        cout << fixed << setprecision(1) << arr[i].name << " " << arr[i].height << " " << arr[i].weight << endl;
    }
    return 0;
}