#include<iostream>
#include<string>
#include<vector>

using namespace std;

int cnt = 0;
vector<string> arr;

void move(int start, int end) {
	arr.push_back(to_string(start) + " " + to_string(end));
	//cout << to_string(start) << " " << to_string(end) << endl;
	cnt++;
}

void hanoi(int n, int start, int end, int pass) {
	if (n == 1)
		move(start, end);
	else {
		hanoi(n - 1, start, pass, end);
		move(start, end);
		hanoi(n - 1, pass, end, start);
	}
}

int main() {
	int n;
	cin >> n;

	hanoi(n, 1, 3, 2);

	cout << cnt << '\n';
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << '\n';
	}
}