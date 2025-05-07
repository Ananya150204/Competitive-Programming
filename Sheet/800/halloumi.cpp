#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if (k >= 2){
        cout << "YES" << endl;
    }
    else {
        for (int i = 0; i < n-1; i++){
            if (arr[i] > arr[i+1]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}
