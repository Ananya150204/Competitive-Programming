#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if (n%2 == 0){
        int steps = n/2;
        for (int i = 0; i < m; i++){
            if ((steps+i)%m == 0){
                steps = steps +i;
                break;
            }
        }
        if (steps <= n){
            cout << steps << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    else {
        int steps = (n-1)/2+1;
        for (int i = 0; i < m; i++){
            if ((steps+i)%m == 0){
                steps = steps +i;
                break;
            }
        }
        if (steps <= n){
            cout << steps << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}