#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n, t;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = 0, cnt = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i - 1] && arr[i] > t && arr[i - 1] > t){
            cnt++;
        }
        else {
            cnt = 0;
        }
        if(max < cnt){
            max = cnt;
        }
    }

    cout << max;


    return 0;
}