#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    vector<int> a(n);
    bool allEqual = true;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] != a[0]){
            allEqual = false;
        }
    }
    if (allEqual){
        cout << -1 << endl;
        return;
    }
    sort(a.begin(),a.end());
    int i = n-1;
    vector<int> c;
    while (a[i] == a[n-1]){
        c.push_back(a[i]);
        i--;
    }
    //cout << endl;
    
    cout << n-c.size() << " " << c.size()<< endl;
    //cout << endl; 
    while (i >= 0){
        cout << a[i] << " ";
        i--;
    }
    cout << endl;
    for (int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }
    cout << endl;


}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}