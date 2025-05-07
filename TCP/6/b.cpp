#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int n;
        cin >> n;
        long long int ans = 0;
        for (long long int i = 0; i < n; i++){
            long long int num;
            cin >> num;
            if (i == n-2){
                ans -= num;
            }
            else {
                ans += num;
            }
        }
        cout << ans << endl;
    }
}