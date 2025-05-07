#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        char c;
        cin >> s >> c;
        bool flag = false;
        int n = s.size();
        for (int i = 0; i < n; i++){
            if (s[i] == c){
                if (i%2 == 0){
                    flag = true;
                    break;
                }
            }
        }
        if (flag){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}