#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, v, t, curposA = 0, curposB = 0;
    vector<int> a, b;
    cin >> n >> m;
    a.emplace_back(0);
    b.emplace_back(0);

    int answer = 0;

    for(int i = 0; i < n; i++){
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            curposA += v;
            a.emplace_back(curposA);
        }
    }
    for(int i = 0; i < m; i++){
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            curposB += v;
            b.emplace_back(curposB);
        }
    }

    for(int i = 1; i < a.size(); i++){
        if(a[i] > b[i] && a[i - 1] <= b[i - 1]){
            answer++;
        }
        else if (a[i] < b[i] && a[i - 1] >= b[i - 1]){
            answer++;
        }
        else if (a[i] == b[i] && a[i - 1] != b[i - 1]){
            answer++;
        }
    }

    cout << answer;


    return 0;
}