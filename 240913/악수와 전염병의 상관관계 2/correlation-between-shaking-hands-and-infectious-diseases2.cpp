#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, p, t;
    cin >> n >> k >> p >> t;

    vector<int> IsInfected(n + 1);
    vector<int> handshakes(n + 1);
    vector<pair<int, int>> timeLine(251);
    IsInfected[0] = 0;
    for(int i = 1; i <= n; i++){
        IsInfected[i] = (i == p) ? 1 : 0;
        handshakes[i] = 0;
    }
    int time, x, y;
    for(int i = 0; i < t; i++){
        cin >> time >> x >> y;
        timeLine[time] = make_pair(x, y);
    }

    for(int i = 1; i <= 250; i++){
        x = timeLine[i].first;
        y = timeLine[i].second;
        if(IsInfected[x] == 1 && handshakes[x] < k){
            if(IsInfected[y] == 1){
                handshakes[y]++;
            }
            IsInfected[x] = 1;
            IsInfected[y] = 1;
            handshakes[x]++;
        }
        else if (IsInfected[y] == 1 && handshakes[y] < k){
            IsInfected[x] = 1;
            IsInfected[y] = 1;
            handshakes[y]++;
        }
    }

    for(int i = 1; i <= n; i++){
        cout << IsInfected[i];
    }



    return 0;
}