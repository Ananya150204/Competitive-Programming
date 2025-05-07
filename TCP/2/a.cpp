#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int cnt0 = 0;
        int cnt1 = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '0'){
                cnt0++;
            }
            else {
                cnt1++;
            }
        }
        if (cnt0 !=cnt1){
            cout << min(cnt0,cnt1) << endl;
        }
        else {
            cout << cnt0-1 << endl;
        }
    }
    
}