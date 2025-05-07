#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(2*n);
        for (int i = 0; i < 2*n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        long sum = 0;
        for (int i = 0; i < 2*n; i = i+2){
            sum += arr[i];
        }
        cout << sum << endl;
    }
}