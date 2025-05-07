#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n,m;
    cin >> n >> m;
    string x;
    cin >> x;
    string s;
    cin >> s;
    int k = 0;
    string ans = x;
    while (ans.length() < m) {
        ans += ans;
        k++;
    }
    //cout << ans << k << endl;
    // Find occurrence of s in ans
    for (int i = 0; i < ans.length(); i++){
        if (ans.substr(i, m) == s){
            cout << k << endl;
            return;
        }
    }
    ans += ans;
    k++;
    for (int i = 0; i < ans.length(); i++){
        if (ans.substr(i, m) == s){
            cout << k << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
    
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}
