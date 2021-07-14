#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int Sum_Number(vector<int> arr) {
	int sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		sum *= 10;
		sum += arr[i];
	}
	return sum;
}

bool Chack_Prime(int n) {
	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

void Permutation(int n, int r, int depth, vector<int> &arr, int &max, int &count) {
	if (r == depth) {
		if (Chack_Prime(Sum_Number(arr))) {
			max = Sum_Number(arr);
			count++;
		}

	}
	for (int i = depth; i < n; i++) {
		swap(arr[i], arr[depth]);
		Permutation(n, r, depth + 1, arr, max, count);
		swap(arr[i], arr[depth]);
	}
	return;
}

int main() {
	int input;
	cin >> input;
	if (input < 1 || input > 9) {
		cout << "입력오류";
		return 0;
	}
	vector<int> arr;
	for (int i = 1; i <= input; i++)
		arr.push_back(i);
	int count = 0, max = 0;
	Permutation(arr.size(), arr.size(), 0, arr, max, count);
	cout << input << "자리 팬디지털 소수 개수 " << count << endl;
	cout << "최대소수 : " << max;

	return 0;
}