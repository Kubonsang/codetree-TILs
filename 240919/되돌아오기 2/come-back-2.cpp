#include <iostream>
#include <string>
using namespace std;

int main() {
    string command;
    cin >> command;
    int x = 0, y = 0, dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, dir = 0, t = 0, answer = -1;
    for(int i = 0; i < command.size(); i++){
        if(command[i] == 'F'){
            x += dx[dir];
            y += dy[dir];
            t++;
            if(x == 0 && y == 0){
                answer = t;
            }
        }
        else if (command[i] == 'R'){
            dir = (dir + 1) % 4;
            t++;
        }
        else if (command[i] == 'L'){
            dir--;
            if(dir == -1)
                dir = 3;
            t++;
        }


        if(answer != -1){
            break;
        }

    }
    cout << answer;
    return 0;
}