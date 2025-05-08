#include <bits/stdc++.h>
using namespace std;

#define ll long long

void ak(){
   int n;
   cin >> n;
   bool isEven = (n%2 == 0);
   int sum = 0;
   for (int i = 0; i < n; i++){
    int num;
    cin >> num;
    sum ^= num;
   }
   if (sum == 0){
    cout << 0 << endl;
   }
   else {
    if (n%2 == 0){
        cout << -1 << endl;
    }
    else {
        cout << sum << endl;
    }
   }
}
int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        ak();
    }
}