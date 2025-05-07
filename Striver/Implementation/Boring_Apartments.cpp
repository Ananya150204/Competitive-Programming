#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int first = 0;
        int num = 0;
        while (n != 0){
            first = n%10;
            num ++;
            n = n/10;
        }
        int ans = (first-1)*10;
        if (num == 1){
            cout << ans+1 << endl;
        }
        else if (num == 2){
            cout << ans + 3 << endl;
        }
        else if (num == 3){
            cout << ans + 6 << endl;
        }
        else {
            cout << ans + 10 << endl;
        }
    }
}