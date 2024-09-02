#include <iostream>
#include <vector>
using namespace std;

class student{
public:
    int score;
    char name;
    student(){}
    student(const student& other) {
        this->score = other.score;
        this->name = other.name;
    }
    student(char name, int score): name(name), score(score) {}
};

int main() {
    char temp1;
    int temp2;
    vector<student> arr(5);
    for(int i = 0; i < 5; i++){
        cin >> temp1 >> temp2;
        arr[i] = student(temp1, temp2);
    }

    student min;
    for(int i = 0; i < 5; i++){
        if(arr[i].score < min.score){
            min = arr[i];
        }
    }

    cout << min.name << " " << min.score;



    return 0;
}