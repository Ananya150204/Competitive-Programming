#include<bits/stdc++.h>
using namespace std;
// Observe that there are only 2 possible cases.
// Alternating 1 0
// Not alternating
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.size();
        if (s == "()"){
            cout << "NO" << endl;
        }
        else {
            bool consec = false;
            cout << "YES" << endl;
            for (int i = 0; i < n-1; i++){
                if (s[i] == s[i+1]){
                    consec = true;
                    break;
                }
            }
            if (consec){
                // Alternating 1 0 works
                for (int i = 0; i < n; i++){
                    cout << "()";
                }
                cout << endl;
            }
            else {
                // In s, it is ()()...
                for (int i = 0; i < n; i++){
                    cout << "(";
                }
                for (int i = 0; i < n; i++){
                    cout << ")";
                }
                cout << endl;
            }
        }
        
    }
}