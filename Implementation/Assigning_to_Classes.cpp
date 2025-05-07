#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> s(2*n);
        for (int i = 0; i < 2*n; i++){
            cin >> s[i];
        }
        sort(s.begin(),s.end());
        cout << s[n]-s[n-1] << endl;
    }
}