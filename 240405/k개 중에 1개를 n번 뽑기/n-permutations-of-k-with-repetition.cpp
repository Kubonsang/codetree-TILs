#include <iostream>
#include <vector>
using namespace std;

vector<int> answer;
int n, k;

void print() {
	for (int item : answer) {
		cout << item << ' ';
	}
	cout << endl;
}

void select(int i) {
	if (i == n + 1) {
		print();
		return;
	}
	for (int a = 1; a <= k; a++) {
		answer.push_back(a);
		select(i + 1);
		answer.pop_back();
	}
}

int main() {
	cin >> k >> n;
	select(1);
}