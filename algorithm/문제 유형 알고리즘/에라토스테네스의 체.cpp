#include<iostream>
#include<vector>

using namespace std;

int main() {
	int min, max, sum = 0, min_n = 0;
	cin >> min >> max;
	if (min < 2)
		min = 2;
	bool* arr = new bool[max + 1];
	for (int i = 0; i < max; i++) {
		arr[i] = true;
	}

	for (int i = 2; i * i <= max; i++) {
		if (arr[i]) {
			for (int j = i * i; j <= max; j += i) {
				arr[j] = false;
			}
		}
	}
	for (int i = min; i <= max; i++) {
		if (arr[i]) {
			if (min_n <= 0) {
				min_n = i;
			}
			sum = sum + i;
		}
	}
	if (sum == 0)
		cout << "-1";
	else
		cout << sum << endl << min_n;

	delete[] arr;
}