#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < s.length(); i++){
        //cout << i << endl;
        if (s[i] >= 65 && s[i] <= 90){
            s[i] = s[i]+32;
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ){
                s.erase(s.begin()+i);
                i--;
                //cout << 'e' << endl;
            }
        else {
            //cout << i << endl;
            s.insert(s.begin()+i,'.');
            i++;
            //cout << i << endl;
        }
    }
    cout << s << endl;
}