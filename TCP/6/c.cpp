#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;cin >> n;
        if (n%2 == 0){
            cout << n/2 << endl;
        }
        else {
            cout << n/2+1 << endl;
        }
        int i = 2;
        int j = 3*n;
        //cout << i << " " << j << endl;
        while (i < j){
            cout << i << " " << j << endl;
            i = i+3;
            j = j-3;

        }
    }
}