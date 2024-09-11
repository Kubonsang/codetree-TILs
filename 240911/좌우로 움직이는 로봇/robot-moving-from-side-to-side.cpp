#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, deltaSec, curPos = 0, aSize = 0, bSize = 0;
    char direct;
    vector<int> a, b;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> deltaSec >> direct;
        if(direct == 'L'){
            for(int j = 0; j <= deltaSec; j++){
                a.push_back(curPos--);
            }
        }
        else{
            for(int j = 0; j <= deltaSec; j++){
                a.push_back(curPos++);
            }
        }
    }

    curPos = 0;

    for(int i = 0; i < m; i++){
        cin >> deltaSec >> direct;
        if(direct == 'L'){
            for(int j = 0; j <= deltaSec; j++){
                b.push_back(curPos--);
            }
        }
        else{
            for(int j = 0; j <= deltaSec; j++){
                b.push_back(curPos++);
            }
        }
    }

    for(int i = 0; i < 100000; i++){
        a.push_back(a.back());
        b.push_back(b.back());
    }



    

    int answer = 0;
    for(int i = 2; i < a.size(); i++){
        if(a[i] == b[i] && a[i - 1] != b[i - 1]){
            answer++;
        }
    }

    cout << answer;
    return 0;
}