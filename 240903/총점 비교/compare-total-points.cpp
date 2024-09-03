#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class person{
public:
    int kor, math, eng;
    string name;
    person() {}
    person(int k, int m, int e, string n): kor(k), math(m), eng(e), name(n) {}
    int getTotal(){
        return kor + math + eng;
    }
    void getInfo(){
        cout << name << " " << kor << " " << math << " " << eng << endl;
    }
};

bool cmp(const person& left, const person& right){
    return left.kor + left.math + left.eng < right.kor + right.math + right.eng;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int size;
    cin >> size;
    person arr[10];
    string temp1;
    int temp2, temp3, temp4;

    for(int i = 0; i < size; i++){
        cin >> temp1 >> temp2 >> temp3 >> temp4;
        arr[i] = person(temp2, temp3, temp4, temp1);
    }


    sort(arr, arr + size, cmp);

    for(int i = 0; i < size; i++){
        arr[i].getInfo();
    }
    return 0;
}