#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v(n);
        bool nonZero = false;
        ll sum = 0;
        int ind = -1;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if (v[i] != 0 && !nonZero){
                ind = i;
                nonZero = true;
            }
        }
        if (ind == -1 || ind == n-1){
            cout << 0 << endl;
            continue;
        }
        for (int i = ind; i < n-1; i++){
            sum += v[i];
            if (v[i] == 0){
                sum += 1;
            }
        }
        cout << sum << endl;
        //cout << "hi" << endl;
    }
}