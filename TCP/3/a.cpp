#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        //vector<bool> ab(n);
        //vector<bool> bb(n);
        bool flag = true;
        int c = max(a[n-1],b[n-1]);
        int d = min(a[n-1],b[n-1]);
        for (int i = 0; i < n; i++){
            int maxi = max(a[i],b[i]);
            int mini = min(a[i],b[i]);
            if (maxi > c || mini > d){
                cout <<"NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag){
            cout <<"YES" << endl;
        }
    }
}