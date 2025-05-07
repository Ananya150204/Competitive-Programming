#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if (n == 1 || n == 2){
        cout << "Yes" << endl;
        return;
    }
    sort(a.begin(), a.end());
    if (n%2 == 0){
        int v = a[0];
        for (int i = 1; i < n/2; i++){
            if (a[i] != v){
                cout << "No" << endl;
                return;
            }
        }
        v = a[n/2];
        for (int i = n/2; i < n; i++){
            if (a[i] != v){
                cout << "No" << endl;
                return;
            }
        }
    }
    else {
        int v = a[0];
        for (int i = 1; i < n/2; i++){
            if (a[i] != v){
                cout << "No" << endl;
                return;
            }
        }

        if (v == a[n/2]){ // 1 1 2
            v = a[n/2+1];
            for (int i = n/2+1; i < n; i++){
                if (a[i] != v){
                    cout << "No" << endl;
                    return;
                }
            }
        }
        else { // 1 2 2
            v = a[n/2];
            for (int i = n/2; i < n; i++){
                if (a[i] != v){
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }
    cout << "Yes" << endl;
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}
