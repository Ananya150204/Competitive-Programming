#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
   int a,b,c;
   cin >> a >> b >> c;
   if (a+ ceil(1.0*c/2) > b+ c - ceil(1.0*c/2)) {
    cout << "First" << endl;
   }
   else if (a+ ceil(1.0*c/2) <= b+ c - ceil(1.0*c/2)){
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