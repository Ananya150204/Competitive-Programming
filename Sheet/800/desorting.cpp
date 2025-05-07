#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int mini = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        // if (i > 0 && arr[i-1] > arr[i]){
        //     cout << 0 << endl; return;
        // }
    }
    // now you can bail out without messing up the input stream
    if (!is_sorted(arr.begin(), arr.end())) {
        cout << 0 << "\n";
        return;
    }
    for (int i = 1; i < n; i++){
        mini = min(mini,arr[i]-arr[i-1]);
    }
    cout << mini/2 + 1 << endl;
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}