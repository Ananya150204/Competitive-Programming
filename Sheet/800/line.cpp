#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxi = 2*(x-arr[n-1]);
    maxi = max(maxi,arr[0]);
    for (int i = 0; i < n-1; i++){
        maxi = max(maxi,arr[i+1]-arr[i]);
    }
    cout << maxi << endl;
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}
