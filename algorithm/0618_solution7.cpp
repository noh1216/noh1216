#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool Chack_number(int n) {
	if (n >= 48 && n <= 57) {
		return true;
	}
	return false;
}

bool Chack_same(vector<char> arr) {
	for (int i = 1; i < arr.size(); i++) {
		for (int j = 0; j < arr.size()-1; j++) {
			if (i == j)
				continue;
			if (arr[i] == arr[j] + 32 || arr[i] == arr[j] - 32)
				return true;
		}
	}
	return false;
}

int main() {
	vector<char> arr;
	vector<int> chack(3, 0);
	char temp;
	for (int i = 0; i < 10; i++){
		cin >> temp;
		arr.push_back(temp);
	}
	for (int i = 0; i < arr.size(); i++) {
		if (Chack_number(arr[0]) || Chack_number(arr[5]) || (arr[1]+arr[3]+arr[5]+arr[6])< 240 || Chack_same(arr)) {
			cout << "FAIL";
			return 0;
		}
		if (Chack_number(arr[i]))
			chack[0]++;
		else if (arr[i] >= 65 || arr[i] <= 90)
			chack[1]++;
		else if (arr[i] >= 97 || arr[i] <= 122)
			chack[2]++;
	}
	if (arr[0] == 0 || arr[1] == 0 || arr[2] == 0) {
		cout << "FAIL";
		return 0;
	}
	cout << "SUCCESS";
}