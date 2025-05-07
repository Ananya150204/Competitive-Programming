#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n,k;
    cin >> n >> k;
    bool flag = false;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x == k){
            flag = true;
        }
    }
    if (flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}
