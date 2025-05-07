#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        vector <int> a(n);
        vector <bool> b(k+1,false);
        for(int i = 1; i <= n; i++){
            cin >> a[i-1];
            if (i <= k && a[i-1] <= k){
                b[a[i-1]] = true;
            }
        }
        if (n==k){
            cout << 0 << endl;
        }
        else {
            int cnt = 0;
            for (int i = 1; i <= k; i++){
                if (b[i] == false){
                    cnt ++;
                }
            }
            cout << cnt << endl;
        }
    }

}