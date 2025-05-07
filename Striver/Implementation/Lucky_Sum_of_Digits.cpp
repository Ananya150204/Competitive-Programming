#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // 4x + 7y = n
    string s;
    while (n > 0 && n%7 == 0){
        n -= 7; s += '7';
    }
    while (n > 0 && n%7 != 0){
        n -= 4; s += '4';
    }
    while (n > 0 && n%7 == 0){
        n -= 7; s += '7';
    }
    if (n == 0){
        cout << s;
    }
    else {
        cout << -1;
    }
}