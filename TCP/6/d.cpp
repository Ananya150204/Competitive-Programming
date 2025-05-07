#include <bits/stdc++.h>
using namespace std;
// 885 Div 2- 1 Amazing proof
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m,k;cin >> n >> m >> k;
        int x,y; cin >> x >> y;
        bool fl = false;
        for (int i = 0; i < k; i++){
            int f,s;
            cin >> f >> s;
            if ((x+y)%2 == (f+s)%2){
                fl = true;
            }
        }
        if (fl){
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
}