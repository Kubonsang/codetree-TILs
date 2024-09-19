#include <iostream>
using namespace std;

int main() {
    int n, d, x = 0, y = 0, t= 0, answer;
    char dir;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> dir >> d;
        if(dir == 'N'){
            for(int j = 0; j < d; j++){
                y++;
                t++;
                if(x == 0 && y == 0){
                    answer = t;
                }
            }
        }
        else if(dir == 'E'){
            for(int j = 0; j < d; j++){
                x++;
                t++;
                if(x == 0 && y == 0){
                    answer = t;
                }
            }
        }
        else if(dir == 'S'){
            for(int j = 0; j < d; j++){
                y--;
                t++;
                if(x == 0 && y == 0){
                    answer = t;
                }
            }
        }
        else if(dir == 'W'){
            for(int j = 0; j < d; j++){
                x--;
                t++;
                if(x == 0 && y == 0){
                    answer = t;
                }
            }
        }
    }
    cout << answer;
    return 0;
}