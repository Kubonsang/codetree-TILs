#include <iostream>
#include <algorithm>

using namespace std;

class elem{
public:
    int num;
    int pre_pos;
    int post_pos;

    elem() {}
    elem(int num, int pre_pos): num(num), pre_pos(pre_pos) {}
};

bool cmp1(const elem& left, const elem& right){
    if(left.num == right.num){
        return left.pre_pos < right.pre_pos;
    }
    return left.num < right.num;
}
bool cmp2(const elem& left, const elem& right){
    return left.pre_pos < right.pre_pos;
}

int main() {
    int size, temp1;
    elem arr[1001];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> temp1;
        arr[i] = elem(temp1, i + 1);
    }

    sort(arr, arr + size, cmp1);

    for(int i = 0; i < size; i++){
        arr[i].post_pos = i + 1;
    }

    sort(arr, arr + size, cmp2);

    for(int i = 0; i < size; i++){
        cout << arr[i].post_pos << " ";
    }


    return 0;
}