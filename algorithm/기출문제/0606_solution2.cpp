#include <iostream>
#include <vector>

using namespace std;

int main_0606_x() {
	int index, in;
	vector<int> input_num;
	vector<int> answer;

	cin >> index;
	for (int i = 0; i < index; i++) {
		cin >> in;
		if (in < 1000 || in > 9999) {
			cout << "ERROR"; 
			break;
		}
		input_num.push_back(in);
	}

	for (int i = 0; i < input_num.size(); i++) {
		int num = 0, temp = 0;
		while (input_num[i] != 0) {
			temp = input_num[i] % 10;
			num += temp;
			input_num[i] -= temp;
			input_num[i] /= 10;
		}
		if (!(answer.empty())) {
			for (int j = 0; j < answer.size(); j++) {
				if (num >= 30)
					num /= 11;
				if (answer[i] == num || num == 0) {
					num++;
					j = 0;
				}
			}
		}
		answer.push_back(num);
	}
	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << endl;
	return 0;
}
