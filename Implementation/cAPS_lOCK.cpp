#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if (s[0] >= 97){
        bool all = true;
        for (int i = 1; i < s.size(); i++){
            if (s[i] < 65 || s[i] > 90){
                all = false;
                break;
            }
        }
        if (all){
            for (int i = 0; i < s.size(); i++){
                if (s[i] >= 97){
                    s[i] = s[i]-32;
                }
                else{
                    s[i] = s[i]+32;
                }
            }
        }
    }
    else {
        bool all = true;
        for (int i = 1; i < s.size(); i++){
            if (s[i] < 65 || s[i] > 90){
                all = false;
                break;
            }
        }
        if (all){
            for (int i = 0; i < s.size(); i++){
                if (s[i] >= 97){
                    s[i] = s[i]-32;
                }
                else{
                    s[i] = s[i]+32;
                }
            }
        }
    }
    cout << s << endl;
}