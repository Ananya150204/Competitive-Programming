#include <bits/stdc++.h>
using namespace std;
int main(){
    //cout << lcm(3,2);
    int t;
    cin >> t;
    while (t--){
        unsigned long long a,b,m;
        cin >> a >> b >> m;
        cout << 2 + m/a + m/b << endl;
    }
}