#include <iostream>
#include <string>

using namespace std;

int main() {
    string phone;
    int result = 0, time;
    cin >> phone;
    int alphabetCnt[26] = { 0, };
    for (char c : phone) {
        alphabetCnt[c - 'A']++;
    }
    for (int i = 0; i <= 'Z' - 'A'; i++) {
        if (i == 'S' - 'A' || i == 'V' - 'A') {
            result += (i / 3 + 2) * alphabetCnt[i];
            continue;
        }
        if (alphabetCnt[i]) {
            time = i / 3 + 3;
            result += (time > 9) ? 10 * alphabetCnt[i] : time * alphabetCnt[i];
        }
    }
    cout << result;
}