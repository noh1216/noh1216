#include<iostream>

using namespace std;

int main() {
	int input;
	cin >> input;
	int **arr = new int*[input];
	// 2차원 배열 할당
	for (int count = 0; count < input; count++) {
		arr[count] = new int[input];
	}
	int size = input;
	int cnt = 1, x = 0, y = -1, direct = 1;
	while (0 <= input) {
		for (int i = 0; i < input; i++) {
			y += direct;
			arr[x][y] = cnt++;
		}
		input--;
		for (int j = 0; j < input; j++) {
			x+= direct;
			arr[x][y] = cnt++;
		}
		direct *= -1;
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}

	// 2차원 배열 해제
	for (int count = 0; count < input; count++) {
		delete[] arr[count];
	}
	delete[] arr;
}