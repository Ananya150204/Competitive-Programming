#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n-1; i++){
        int x;
        cin >> x;
        //cout << x << " ";
        sum += x;
    }
    //cout << endl;
    cout << -1*sum << endl;
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}
