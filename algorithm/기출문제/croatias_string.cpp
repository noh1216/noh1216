#include<iostream>

using namespace std;

int main() {
    string s, sum_s; int cnt = 0;
    string croatia[9] = { "c=", "c-", "dz=", "d-", "lj", "nj","s=","z=" };
    cin >> s;
    bool* On = new bool[s.size()];
    for (int i = 0; i < s.size(); i++)
        On[i] = 0;
    for (int i = 0; i < s.size()-1; i++) {
        sum_s = s[i];
        sum_s += s[i + 1];
        if (s[i+2] != NULL && sum_s + '=' == croatia[2]) {
            On[i] = 1; On[i + 1] = 1; On[i + 2] = 1;
            i += 2;
            cnt++;
            continue;
        }
        for (string t : croatia) {
            if (sum_s == t) {
                cnt++;
                On[i] = 1; On[i + 1] = 1;
            }
            
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (On[i] == 0)
            cnt++;
    }
    delete[] On;
    cout << cnt;
}