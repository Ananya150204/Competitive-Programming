#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n == 1 || n == 3){
            cout << -1 << endl;
            continue;
        }
        // 11
        //string s = "";
        //s += '6';
        // Diff will be a multiple of 3
        // Maxm diff possible
        // n even - 3*n/2
        // n odd - (3*n-15)/2
        // is 0 possible
        if (n%2 == 1){
            // 6366
            for (int i = 0; i < n-4; i++){
                cout << '3';
            }
            cout << "6366" << endl;
        }
        else {
            for (int i = 0; i < n-2; i++){
                cout << '3';
            }
            cout << "66" << endl;
        }
        
    }
}