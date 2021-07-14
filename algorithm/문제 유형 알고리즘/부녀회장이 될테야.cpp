#include<iostream>
#include<vector>

using namespace std;

/*
  (1, 3)
  1 4 10 20
  1 3 6  10
  1 2 3  4

*/

int main() {
    int k, n, input;
    vector<int>arr;
    cin >> input;
    for (int i = 0; i < input; i++) {
        cin >> k >> n;
        for (int j = 1; j <= n; j++) {
            arr.push_back(j);
        }
        for (int j = 0; j < k; j++) {
            for (int h = 1; h < arr.size(); h++) {
                arr[h] += arr[h-1];
                //cout << "arr[" << h - 1 << "] : " << arr[h - 1] << " , arr[" << h << "] : " << arr[h] << endl;
            }
        }
        cout << arr[arr.size()-1] << '\n';
        arr.clear();
    }
}