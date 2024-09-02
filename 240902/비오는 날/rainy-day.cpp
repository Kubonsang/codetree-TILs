#include <iostream>
#include <string>
#include <vector>
using namespace std;


class aaa{
public:
    string year;
    string date;
    string wether;

    aaa() {}
    aaa(string temp1, string temp2, string temp3): year(temp1), date(temp2), wether(temp3) {}
    aaa(const aaa& other){
        this->year = other.year;
        this->date = other.date;
        this->wether = other.wether;
    }
};

int main() {
    int size;
    cin >> size;
    vector<aaa> arr;
    string temp1, temp2, temp3;
    for(int i = 0; i < size; i++){
        cin >> temp1 >> temp2 >> temp3;
        if(temp3 == "Rain"){
            arr.push_back(aaa(temp1, temp2, temp3));
        }
            
    }


    aaa min = arr[0];
    for(aaa item : arr){
        if(item.year < min.year)
            min = item;
    }

    cout << min.year << " " << min.date << " " << min.wether;




    return 0;
}