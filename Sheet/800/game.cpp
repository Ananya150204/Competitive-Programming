#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    if (n%3 == 1 || n%3 == 2){
        cout << "First" << endl;
    }
    else {
        cout << "Second" << endl;
    }
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}
