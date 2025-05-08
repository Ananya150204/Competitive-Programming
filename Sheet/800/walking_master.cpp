#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (d-b == c-a && d >= b){
        cout << d-b << endl;
    }
    else if (d < b) {
        cout << -1 << endl;
    }
    else {
        int a1 = d-b;
        int x = c-d+b;
        int a2 = a-x;
        if (a2 < 0){
            cout << -1 << endl;
            return;
        }
        cout << ((a1+a2 >= 0) ? a1+a2 : -1) << endl;
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