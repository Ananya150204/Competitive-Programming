#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m,H,k;
        cin >> n >> m >> k >> H;
        vector<int> h(n);
        for (int i = 0; i < n; i++){
            cin >> h[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (h[i] != H && abs(h[i]-H)%k == 0){
                int x = abs(h[i]-H)/k;
                if (x <= m-1){
                    //cout << h[i] << " ";
                    cnt ++;
                }
            }
        }
        //cout << endl;
        cout << cnt << endl;
    }
}