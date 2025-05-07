#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k,x;
        cin >> n >> k >> x;
        if (k > x+1 || n < k){
            cout << -1 << endl;
            continue;
        }
        // k <= x+1 && n >= k
        long sum = 0;
        for (int i = 1; i < k; i++){
            sum += i;
        }
        if (k == x)
            cout << sum + (n-k)*(x-1) << endl;
        else
            cout << sum + (n-k)*x << endl;
            
    }
}