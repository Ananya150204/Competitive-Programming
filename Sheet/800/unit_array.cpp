#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    int sum = 0;
    int prod = 1;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        prod *= num;
        sum += num;
    }
    if (sum >= 0 && prod > 0){
        cout << 0 << endl;
    }
    else if (sum >= 0 && prod < 0){
        cout << 1 << endl;
    }
    else if (sum < 0 && prod > 0){
        int s = ceil((-1.0*sum)/2);
        if (s%2 == 0){
            cout << s << endl;
        }
        else {
            cout << s+1 << endl;
        }
    }
    else {
        int s = ceil((-1.0*sum)/2);
        if (s%2 == 0){
            cout << s+1 << endl;
        }
        else {
            cout << s << endl;
        }
    }
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}