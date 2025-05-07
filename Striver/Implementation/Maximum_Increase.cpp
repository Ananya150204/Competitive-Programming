#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = 1;
    int i = 0;
    int j = 0;
    while (j < n){
        if (j > 0 && a[j] <= a[j-1]){
            maxi = max(maxi,j-i);
            i = j;
        }
        j++;
    }
    cout << max(maxi,j-i) << endl;
}