#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, deltaSec, curPos = 0;
    char direct;
    vector<int> a, b;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> direct >> deltaSec;
        if(direct == 'L'){
            for(int j = 0; j < deltaSec; j++){
                a.push_back(curPos--);
            }
        }
        else{
            for(int j = 0; j < deltaSec; j++){
                a.push_back(curPos++);
            }
        }
    }

    curPos = 0;

    for(int i = 0; i < m; i++){
        cin >> direct >> deltaSec;
        if(direct == 'L'){
            for(int j = 0; j < deltaSec; j++){
                b.push_back(curPos--);
            }
        }
        else{
            for(int j = 0; j < deltaSec; j++){
                b.push_back(curPos++);
            }
        }
    }



    int answer = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] == b[i]){
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}