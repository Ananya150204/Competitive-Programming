#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        unsigned long long int n;
        cin >> n;
        //unsigned long long int mini = 0;
        //unsigned long long int maxi = 0;
        if (n%2 != 0){
            cout << -1 << endl;continue;
        }
        if (n > 1 && n < 3){
            cout << -1 << endl; 
        }
        else {
            if (n%6 == 0){
                cout << n/6 << " " << n/4 << endl;
            }
            else {
                cout << n/6+1 << " " << n/4 << endl;
            }
        }
    }
}