#include<iostream>

using namespace std;

bool dec(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main_0605() {
	int count = 0, prime = 2;
	int arr[100] = { 0 };
	int input_arr[2];
	cout << "�浿 : ";
	cin >> input_arr[0];
	cout << "��� : ";
	cin >> input_arr[1];

	for (int i = 0; i < 2; i++) {
		prime = 2, count = 0;
		while (input_arr[i] != count) {
			if (dec(prime)) {
				for (int k = 0; k < 100; k++)
					if(k%prime == 0)
						(arr[k] == 1) ? arr[k] = 0 : arr[k] = 1;
				count++;
			}
			prime++;
		}
		input_arr[i] = 0;
		for (int f = 0; f < 100; f++) 
			if (arr[f] == 1) 
				input_arr[i]++;
		input_arr[i]--;
		for (int h = 0; h < 100; h++)
			arr[h] = 0;
	}
	cout << "�浿 wī�� : " << input_arr[0] << "��" <<endl;
	cout << "��� wī�� : " << input_arr[1] << "��" <<endl;
	if (input_arr[0] > input_arr[1])
		cout << "�浿 ��";
	else if (input_arr[0] < input_arr[1])
		cout << "��� ��";
	else
		cout << "���º�";
	return 0;
}