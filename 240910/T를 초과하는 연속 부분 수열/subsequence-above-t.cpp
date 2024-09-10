#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = 1, cnt = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i - 1] && arr[i] > t && arr[i - 1] > t){
            cnt++;
        }
        else {
            cnt = 1;
        }
        if(max < cnt){
            max = cnt;
        }
    }

    if(max == 1){
        cout << 0;
        return 0;
    }
    cout << max;


    return 0;
}