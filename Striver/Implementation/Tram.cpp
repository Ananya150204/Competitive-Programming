#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int maxi = 0;
    int total = 0;
    for (int i = 0; i < 2*n; i++){
        int num;
        cin >> num;
        if (i%2 == 0){
            total = total-num;
        }
        else {
            total = total+num;
            maxi = max(maxi,total);
        }
    }
    cout << maxi << endl;
}