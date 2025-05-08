#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    ll k,n;
    cin >> n >> k;
    if (n%2 == 0){
        cout << "YES" << endl;
    }
    else {
        if (k%2 == 0){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}