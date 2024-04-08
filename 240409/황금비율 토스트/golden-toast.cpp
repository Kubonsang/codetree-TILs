#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	list<char> recipt;

	int n, m;
	cin >> n >> m;
	string FirstToast;
	cin >> FirstToast;
	char a;
	for (int i = 0; i < n; i++) {
		recipt.push_back(FirstToast[i]);
	}
	char b;
	list<char>::iterator cursor = recipt.end();
	for (int i = 0; i < m; i++) {
		cin >> b;
		if (b == 'L') {
			if (cursor != recipt.begin()) {
				cursor--;
			}
		}
		else if (b == 'R') {
			if (cursor != recipt.end()) {
				cursor++;
			}
		}
		else if (b == 'D') {
			if (cursor != recipt.end()) {
				cursor = recipt.erase(cursor);
			}
		}
		else if (b == 'P') {
			cin >> a;
			recipt.insert(cursor, a);
		}
	}

	for (char item : recipt) {
		cout << item;
	}
	cout << endl;

}