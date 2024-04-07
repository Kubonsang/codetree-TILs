#include <iostream>
using namespace std;


int main() {
	int n, k;
	cin >> n >> k;

	int** arr = new int* [2];
	arr[0] = new int[n];
	arr[1] = new int[n];

	int temp1, temp2;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	/*
	
	ㅁㅁㅁㅁㅁ★
	ㅁㅁㅁㅁㅁ☆

	->

	☆ㅁㅁㅁㅁㅁ
	★ㅁㅁㅁㅁㅁ
	
	*/

	// 미루기.
	for (int a = 0; a < k; a++) {
		temp1 = arr[0][n - 1]; // temp1 = ★
		temp2 = arr[1][n - 1]; // temp2 = ☆

		for (int i = n - 1; i > 0; i--) {
			arr[0][i] = arr[0][i - 1];
			arr[1][i] = arr[1][i - 1];
		}

		arr[0][0] = temp2;
		arr[1][0] = temp1;
	}
	// 출력.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

}