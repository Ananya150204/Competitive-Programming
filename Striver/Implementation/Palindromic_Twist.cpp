#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; string s;
    cin >> n >> s;
    int i = 0; int j = n-1;
    while (i <= j){
        if ((s[i]+1 != s[j]+1) && (s[i]+1 != s[j]-1) && (s[i]-1 != s[j]+1) && (s[i]-1 != s[j]-1)){
            cout << "No" << endl;
            return;
        }
        else {
            i++;
            j--;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}