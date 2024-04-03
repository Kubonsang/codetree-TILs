#include <iostream>
using namespace std;
//맨 왼쪽 위에서 부터 1, 2, 3... 9번 계산.
int arr[100][100];
int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int prev, length, sum = 0;

	for (int i = 0; i < n; i++) {
		int j = 0;
		length = 1;
		prev = arr[i][j];
		while (j < n) {
			j++;
			if (arr[i][j] == prev) {
				length++;
			}
			else {
				length = 1;
			}
			prev = arr[i][j];
			if (length >= m) {
				sum++;
				break;
			}
		}
	}

	for (int j = 0; j < n; j++) {
		int i = 0;
		length = 1;
		prev = arr[i][j];
		while (i < n) {
			i++;
			if (arr[i][j] == prev) {
				length++;
			}
			else {
				length = 1;
			}
			prev = arr[i][j];
			if (length >= m) {
				sum++;
				break;
			}
		}
	}
	cout << sum;
	
}