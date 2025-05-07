#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int ans = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        ans = min(ans,abs(arr[i]));
    }
    cout << ans << endl;

}
int32_t main(){
    int t = 1;
    //cin >> t;
    while(t--){
        diwan();
    }
}