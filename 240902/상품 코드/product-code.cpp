#include <iostream>
#include <string>
using namespace std;


class a{
public:
    string name;
    int code;

    a(): name("codetree"), code(50) {}

    a(string name, int code): name(name), code(code) {}
};

int main() {
    string temp1;
    int temp2;
    cin >> temp1 >> temp2;

    a a1;
    a a2(temp1, temp2);

    cout << "product " << a1.code << " is " << a1.name << endl;
    cout << "product " << a2.code << " is " << a2.name << endl;

    return 0;
}