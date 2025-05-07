#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int ans = 0;
        if (a[0] == '1' || a[n-1] == '1'){
            cout << 2*n << endl;
        }
        else {
            bool flag = false;
            for (int i = 1; i < n; i++){
                if (a[i] == '1'){
                    flag = true;
                    ans = max(ans,max(2*(i+1),2*(n-i)));
                    //break;
                }
            }
            if (!flag){
                cout << n << endl;
            }
            else {
                cout << ans << endl;
            }
        }
    }
}