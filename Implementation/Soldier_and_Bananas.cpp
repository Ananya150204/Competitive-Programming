#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin >> k >> n >> w;
    long sum = (w*(2*k+(w-1)*k))/2;
    if (sum-n >= 0){
        cout << sum-n;
        return 0;
    }
    cout << 0;
    return 0;
}