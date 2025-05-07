#include <bits/stdc++.h>
using namespace std;

bool isDiverse(string s, int i, int j){
    vector <int> ch(26,0);
    for (int k = i; k <= j; k++){
        ch[s[k]-97]++;
    }
    bool flag = true;
    for (int k = 0; k < 26; k++){
        if (ch[k] > (j-i+1)/2){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (isDiverse(s,i,j)){
                cout << "YES"<< endl;
                cout << s.substr(i,j-i+1) << endl;
                return 0;
            }
        }
    }
    cout << "NO"<< endl;
}