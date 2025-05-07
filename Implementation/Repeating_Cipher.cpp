#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    int k = 1;
    string t = "";
    while (i < n){
        t += s[i];
        i = (k*k+k)/2;
        k++;
    }
    cout << t << endl;
}