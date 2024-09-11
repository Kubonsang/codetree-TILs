#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, v, t, curPos = 0;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;

    for(int i = 0; i < n; i++){
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            a.push_back(curPos);
            curPos += v;
        }
    }
    curPos = 0;
    for(int i = 0; i < m; i++){
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            b.push_back(curPos);
            curPos += v;
        }
    }

    int answer = 0;
    vector<int> arr;
    arr.push_back(0);

    for(int i = 1; i < a.size(); i++){
        if(a[i] > b[i]){
            arr.push_back(1);
        }
        else if (a[i] == b[i]){
            arr.push_back(arr.back());
        }
        else if (a[i] < b[i]){
            arr.push_back(-1);
        }
    }

    for(int i = 2; i < arr.size(); i++){
        if(arr[i - 1] != arr[i]){
            answer++;
        }
    }

    cout << answer;



    return 0;
}