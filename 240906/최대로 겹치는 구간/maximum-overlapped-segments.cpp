#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp1, temp2;
    cin >> n;
    vector<int> arr(201);
    for(int i = 0; i < n; i++){
        cin >> temp1 >> temp2;
        temp1 += 100;
        temp2 += 100;
        for(int j = temp1; j < temp2; j++){
            arr[j]++;
        }
    }

    int max = 0;

    for(int i = 0; i < 201; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}