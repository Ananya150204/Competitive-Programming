#include <bits/stdc++.h>
using namespace std;

#define ll long long

void ak(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == s[n-1]){
        cout << n << endl;
        return;
    }
    int i = 0;
    int j = n-1;
    while (i < j){
        if (s[i] == s[j]){
            break;
        }
        i++;
        j--;
    }
    cout << j-i+1 << endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        ak();
    }
}