#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--){
        long long int a,b,c;
        cin >> a >> b >> c;
        if (a-c < 0){
            cout << 1 << " ";
        }
        else {
            cout << -1 << " ";
        }
        if (a*b-c > 0){
            cout << b << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}