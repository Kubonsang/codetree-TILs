#include <iostream>

using namespace std;

int arr[200][200];
int n, m;

// 트로미노 블록 모양

/*
0번       
ㅁ
ㅁㅁ

1번
ㅁㅁ
ㅁ

2번
ㅁㅁ
  ㅁ

3번
  ㅁ
ㅁㅁ

4번
ㅁㅁㅁ

5번
ㅁ
ㅁ
ㅁ
*/

int dx[6][3] = {
	{0, 0, 1},
	{0, 1, 0},
	{0, 1, 1},
	{1, 0, 1},
	{0, 1, 2},
	{0, 0, 0}
};
int dy[6][3] = {
	{0, 1, 1},
	{0, 0, 1},
	{0, 0, 1},
	{0, 1, 1},
	{0, 0, 0},
	{0, 1, 2}
};

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}


	int sum = 0;
	int maxValue = 0;

	for (int b = 0; b < 4; b++) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < m - 1; j++) {
				sum += (arr[i + dy[b][0]][j + dx[b][0]] + arr[i + dy[b][1]][j + dx[b][1]] + arr[i + dy[b][2]][j + dx[b][2]]);
				if (sum > maxValue) maxValue = sum;
				sum = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m - 1; j++) {
			sum += (arr[i + dy[4][0]][j + dx[4][0]] + arr[i + dy[4][1]][j + dx[4][1]] + arr[i + dy[4][2]][j + dx[4][2]]);
			if (sum > maxValue) maxValue = sum;
			sum = 0;
		}
	}


	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m; j++) {
			sum += (arr[i + dy[5][0]][j + dx[5][0]] + arr[i + dy[5][1]][j + dx[5][1]] + arr[i + dy[5][2]][j + dx[5][2]]);
			if (sum > maxValue) maxValue = sum;
			sum = 0;
		}
	}
	

	cout << maxValue;

}