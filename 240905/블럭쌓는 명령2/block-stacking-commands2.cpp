#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    int a, b;
    cin >> n >> k;
    vector<int> blocks(n + 1);

    for(int i = 0; i < k; i++){
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            blocks[j]++;
        }
    }

    int max = 0;
    for(int i = 1; i < blocks.size(); i++){
        if(blocks[i] > max)
            max = blocks[i];
    }

    cout << max;

    return 0;
}