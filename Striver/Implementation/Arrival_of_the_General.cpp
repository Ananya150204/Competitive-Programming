#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int maxi = INT_MIN;
    int maxiIndex = -1;
    int mini = INT_MAX;
    int miniIndex = -1;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if (maxi < v[i]){
            maxi = v[i];
            maxiIndex = i;
        }
        if (mini >= v[i]){
            mini = v[i];
            miniIndex = i;
        }
    }
    if (maxiIndex == miniIndex){
        cout << 0 << endl;
    }
    else if (maxiIndex < miniIndex){
        cout << maxiIndex + n-1 - miniIndex << endl;
    }
    else {
        cout << maxiIndex + n-2 - miniIndex << endl;
    }
    return 0;
}