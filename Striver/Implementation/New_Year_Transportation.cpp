#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    vector<int> arr(n-1);
    for (int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    int i = 0;
    
    while (i < n){
        i += arr[i];
        if (i > t-1){
            cout << "No" << endl;
            return 0;
        }
        if (i == t-1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    
}