#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if (sum%2 == 0){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;

    }
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}