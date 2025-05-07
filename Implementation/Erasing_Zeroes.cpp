#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i = 0;
        int j = s.size()-1;
        while (i < j){
            if (s[i] == '1' && s[j] == '1'){
                break;
            }
            else if (s[i] == '1' && s[j] =='0'){
                j--;
            }
            else if (s[i] == '0' && s[j] == '1'){
                i++;
            }
            else {
                i++;
                j--;
            }
        }
        if (i==j){
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        for (int k = i; k < j; k++){
            if (s[k] == '0'){
                ans ++;
            }
        }
        cout << ans << endl;
    }
}