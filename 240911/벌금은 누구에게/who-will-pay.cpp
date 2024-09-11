#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k, temp;
    cin >> n >> m >> k;
    vector<int> student;
    vector<int> life;
    life.push_back(0);
    for(int i = 1; i <= n; i++){
        student.push_back(i);
        life.push_back(k);
    }

    for(int i = 0; i < m; i++){
        cin >> temp;
        life[temp]--;
        if(life[temp] == 0){
            cout << temp;
            return 0;
        }
    }
    cout << -1;

    return 0;
}