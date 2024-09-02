#include <iostream>
#include <string>
using namespace std;

class a{
public:
    int time;
    string sc;
    char mp;
    a(int time, char mp, string sc): time(time), sc(sc), mp(mp) {}
};

int main() {
    int ddd;
    string d;
    char dd;
    cin >> d >> dd >> ddd;

    a asd(ddd, dd, d);
    cout << "secret code : " << asd.sc << "\nmeeting point : " << asd.mp << "\ntime : " << asd.time;
    
    return 0;
}