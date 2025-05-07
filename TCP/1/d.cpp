#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long xa,ya,xb,yb,xc,yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        int ans = 1;
        if (((xb>xa) &&(xc >xa)) || ((xb<xa) &&(xc < xa)) ){
            ans += min(abs(xb-xa),abs(xc-xa));
        }
        if (((yb>ya) &&(yc >ya)) || ((yb<ya) &&(yc < ya)) ){
            ans += min(abs(yb-ya),abs(yc-ya));
        }
        cout << ans << endl;
    }
    
}