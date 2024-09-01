#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string t;
    int size, k;

    vector<string> arr;
    vector<string> dict;


    cin >> size >> k >> t;
    arr.resize(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i].substr(0, t.length()) == t) {
            dict.emplace_back(arr[i]);
        }
    }


    sort(dict.begin(), dict.end());


    cout << dict[k - 1];


    return 0;
}