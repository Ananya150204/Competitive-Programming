#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin >> x;
    for (auto& ch : x){
        if (ch >= '5'){
            ch = '9'-ch + '0';
        }
    }
    if (x.front() == '0'){
        x.front() = '9';
    }
    cout << x << endl;
    return 0;
}