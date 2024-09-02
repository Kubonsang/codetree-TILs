#include <iostream>
#include <string>
using namespace std;

class a{
public:

    int lv;
    string id;

    a() : lv(10), id("codetree") {}
    a(int lv, string id): lv(lv), id(id) {}
};



int main() {
    string b;
    int bb;
    cin >> b >> bb;
    a a1;
    a a2(bb, b);
    cout << "user " << a1.id << " lv " << a1.lv << endl;
    cout << "user " << a2.id << " lv " << a2.lv << endl;

    return 0;
}