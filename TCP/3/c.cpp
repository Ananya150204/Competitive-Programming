#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,x,y;
        cin >> n >> x >> y;
        if ((x == 0 && y == 0) || (x == y)){
            cout << -1 << endl;
            continue;
        }
        // x*a + y*b = n-1; a+b = n
        if (x == 0 || y == 0){
            x = max(x,y);
            int a = 0;
            if ((n-1)%x == 0){
                a = (n-1)/x;
            }
            else {
                cout << -1 << endl;
                continue;
            }
            int cnt = 1;
            int k = 1;
            for (int i = 0; i < a; i++){
                for (int j = 0; j < x; j++){
                    cnt++;
                    cout << k << " ";
                }
                k = cnt+1;
                //k = k+x+1;
            }
            cout << endl;
            continue;
        }
        bool f = false;
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++){
            if (n-1-i*x >= 0 && (n-1-i*x)%y == 0){
                if (i+(n-1-i*x)/y == n){
                    f = true;
                    a = i;
                    b = (n-1-i*x)/y;
                    break;
                }
            }
        }
        if (!f){
            cout << -1 << endl;
        }
        else {
            int cnt = 1;
            int k = 1;
            for (int i = 0; i < a; i++){
                //k ++;
                for (int j = 0; j < x; j++){
                    cnt ++;
                    cout << k << " ";
                }
                //k = k+x+1;
                k = cnt+1;
            }
            for (int i = 0; i < b; i++){
                //k ++;
                for (int j = 0; j < y; j++){
                    cnt ++;
                    cout << k << " ";
                }
                k = cnt+1;
            }
            cout << endl;
        }
    }
}