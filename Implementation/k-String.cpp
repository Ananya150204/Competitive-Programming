#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector <int> ch(26);
    for (int i = 0; i < s.size(); i++){
        ch[s[i]-97]++;
    }
    string ans = "";
    bool flag = true;
    for (int i = 0; i < 26; i++){
        if (ch[i]%k != 0){
            cout <<-1 << endl;
            return 0;
        }
        else {
            int times = ch[i]/k;
            for (int j = 0; j < times; j++){
                ans += char(97+i);
            }
        }
    }
    string f = ans;
    while (--k){
        ans = ans + f;
    }
    cout << ans;
    
}