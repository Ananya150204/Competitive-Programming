#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        v[num-1] = i+1;
    }
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    return 0;
}