#include <iostream>
#include <vector>

using namespace std;

int mea(int n) {
	int count = 0, i;
	for (i = 1; i * i < n; i++) {
		if (n % i == 0)
			count += 2;
	}
	if (i * i == n)
		count++;
	return count;
}

int main_0607() {
	int k, low, high;
	vector<int> answer;
	cin >> k >> low >> high;
	for (int i = low; i <= high; i++) {
		if (mea(i) == k) {
			answer.push_back(i);
		}
	}
	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << " ";
	cout << endl << "ÃÑ " << answer.size() << "°³";
	return 0;
}