#include <iostream>
#include<vector>

using namespace std;

int main() {
    char temp; int n, cnt = 0, size = 0; string s;
    bool flag = false, sce_n = false;
    cin >> n;
    vector<char> change;
    for (int i = 0; i < n; i++) {
        cin >> s;
        change.push_back(s[0]);
        for (int j = 0; j < s.size()-1; j++) {
            if (s[j] != s[j + 1]) {
                change.push_back(s[j + 1]);
            }
        }
        flag = false; size = change.size(); sce_n = false;
        for (char j : change){
            for (int k = 0; k < s.size(); k++) {
                if (j == s[k] && s[k] != s[k + 1] && flag == false) {
                    flag = true;
                    continue;
                }
                else if (j == s[k] && flag == true) {
                    sce_n = true;
                    break;
                }
            }
            flag = false;
            if (sce_n == true)
                break;
        }
        if (sce_n == false) {
            cnt++;
        }
        for (int j = 0; j < size; j++) 
            change.pop_back();
        
    }
    cout << cnt;
}