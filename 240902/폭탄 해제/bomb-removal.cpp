#include <iostream>
#include <string>
using namespace std;


class a{
public:
    string code;
    char color;
    int sec;
    a(string code, char color, int sec): code(code), color(color), sec(sec) {}
};

int main() {
    // 여기에 코드를 작성해주세요.

    string temp1;
    char temp2;
    int temp3;

    cin >> temp1 >> temp2 >> temp3;

    a asd(temp1, temp2, temp3);

    cout << "code : " << asd.code << "\ncolor : " << asd.color << "\nsecond : " << asd.sec;

    return 0;
}