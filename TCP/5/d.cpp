#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        unsigned long long int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a*d == b*c){
            cout << 0 << endl;
            //continue;
        }
        else if (a == 0 || c == 0 || (a*d)%(b*c) == 0 || (b*c)%(a*d) == 0){
            cout << 1 << endl;
            //continue;
        }
        else {
            cout << 2 << endl;
        }
    }
}