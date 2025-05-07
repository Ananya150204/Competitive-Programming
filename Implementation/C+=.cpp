#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b,n;
        cin >> a >> b >> n;
        int c = min(a,b);
        int d = max(a,b);
        int count = 0;
        while (d <= n){
            int temp = d;
            d += c;
            c = temp;
            count ++;
        }
        cout << count << endl;
    }
}