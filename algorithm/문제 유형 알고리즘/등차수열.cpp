#include<iostream>

using namespace std;

bool Isometric(int n) {
    int f_n, s_n, Iso_num = (n%10) - ((n/10)%10);

    while (n / 10 > 0) {
        f_n = n % 10;
        n /= 10;
        s_n = n % 10;
        cout << n << "¹øÂ°" << " f_n : " << f_n << " s_n : " << s_n;
        if ((f_n - s_n) != Iso_num) {
            cout << "     false" << endl;
            return false;
        }
    }
    cout << "     true" << endl;
    return true;
}

int main() {
    int n, cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (Isometric(i))
            cnt++;
    }
    cout << cnt;
}