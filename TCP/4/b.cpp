#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        bool allZero = true;
        bool allnonZero = true;
        int cnt0 = 0;
        int cnt = 0;
        bool isOne = false;
        bool other = false;
        int cnt1 = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] == 0){
                allnonZero = false;
                cnt0 ++;
            }
            else {
                allZero = false;
                cnt ++;
            }
            if (a[i] == 1){
                 isOne = true;
                 cnt1 ++;
            }
            else if (a[i] > 1){
                other = true;
            }
               
        }
        if (allnonZero){
            cout << 0 << endl;
        }
        else if (allZero){
            cout << 1 << endl;
        }
        else if (cnt0 == 1 || cnt0 == 2 || cnt0 <= cnt+1 || cnt0 <= cnt){
            cout << 0 << endl;
        }
        else if (cnt0 > cnt+1){
            if (!isOne){
                cout << 1 << endl;
            }
            else if (other){
                cout << 1 << endl;
            }
            else {
                cout << 2 << endl;
            }
        }
    }
}