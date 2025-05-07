#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi = 0;
    int cnt = 0;
    int tot = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '.'){
            tot += 1;
            cnt += 1;
        }
        else {
            maxi = max(maxi,cnt);
            cnt = 0;
        }
    }
    maxi = max(maxi,cnt);
    if (maxi > 2){
        cout << 2 << endl;
    }
    else {
        cout << tot << endl;
    }
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}
    