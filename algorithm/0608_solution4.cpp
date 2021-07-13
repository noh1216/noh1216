#include<iostream>
#include <vector>

using namespace std;

void paint(int map_width_max, int map_height_max, int map_width_rea, int map_height_rea);

int main() {
	int input, map_height_max = 0, map_width_max = 0;
	cin >> input;
	int map_height_rea = input, map_width_rea = input;
	if (input < 5 || 100 < input) {
		cout << "제작 불가";
		return 0;
	}
	else if (input % 5 != 0) {
		map_width_max = input - (input % 5) + 5;
		map_height_max = input - (input % 5) + 5;
		paint(map_width_max, map_height_max, map_width_rea, map_height_rea);
		return 0;
	}
	else {
		map_width_max = input;
		map_height_max = input;
		paint(map_width_max, map_height_max, map_width_rea, map_height_rea);
		return 0;
	}
}

void paint(const int map_width_max,const int map_height_max,const int map_width_rea,const int map_height_rea) {
	vector<vector<int>> arr(map_width_max, vector<int>(map_width_max, -1));
	cout << (map_width_max / 5)*(map_width_max / 5)  << " " << map_width_rea*map_width_rea << endl;
	int i, j, k, h, count;
	count = (map_height_rea % 2 == 0) ? 0 : -1;
	int center = map_height_rea / 2;
	for (i = 0; i < map_height_rea; i++) {
		if (i <= center) {
			for (j = 0; j < i + 1; j++)
				arr[i][j] = 1;
			for (k = j; k < map_width_rea - i-1; k++)
				arr[i][k] = 0;
			for (h = k; h < map_width_rea; h++)
				arr[i][h] = 1;
		}
		else {
			for (j = 0; j < center - count+1; j++) {
				arr[i][j] = 1;
				count++;
			}
			for (k = j; k < i; k++)
				arr[i][k] = 0;
			for (h = k; h < map_width_rea; h++)
				arr[i][h] = 1;
		}
	}
	for (int i = 0; i < map_height_max; i++) {
		for (int j = 0; j < map_width_max; j++) {
			if (arr[i][j] == 0)
				cout << ".";
			else if (arr[i][j] == 1)
				cout << "*";
			else
				cout << "X";
		}
		cout << endl;
	}
}