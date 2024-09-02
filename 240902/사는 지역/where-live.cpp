#include <iostream>
#include <string>
#include <vector>
using namespace std;


class human{
public:
    string name;
    string num;
    string place;
    human(){}
    human(string a, string b, string c): name(a), num(b), place(c) {}
    human(const human& other){
        this->name = other.name;
        this->num = other.num;
        this->place = other.place;
    }

};

int main() {

    string temp1, temp2, temp3;
    int size;
    cin >> size;

    vector<human> arr(size);

    for(int i = 0; i < size; i++){
        cin >> temp1 >> temp2 >> temp3;
        arr[i] = human(temp1, temp2, temp3);
    }

    human t = arr[0];
    for(human item : arr){
        if(item.name > t.name)
            t = item;
    }
    cout << "name " << t.name << "\naddr " << t.num << "\ncity " << t.place;

    
    return 0;
}