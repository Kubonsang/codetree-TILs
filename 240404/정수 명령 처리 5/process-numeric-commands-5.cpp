#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {

    vector<int> v;
    string command;
    int num, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> command;
        if(command == "push_back"){
            cin >> num;
            v.push_back(num);
        }
        else if(command == "pop_back"){
            v.pop_back();
        }
        else if(command == "size"){
            cout << v.size() << endl;
        }
        else if(command == "get"){
            cin >> num;
            cout << v[num - 1] << endl;
        }
    }
    return 0;
}