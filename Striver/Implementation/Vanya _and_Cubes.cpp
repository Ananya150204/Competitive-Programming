#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k = 1;
    int sum = 0;
    while (sum <= n){
        sum += (k*k+k)/2;
        if (sum > n){
            cout << k-1;
            return 0;
        }
        if (sum == n){
            cout << k;
            return 0;
        }
        k++;
    }
    cout << k-1;
}