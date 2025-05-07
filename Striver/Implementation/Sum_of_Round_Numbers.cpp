#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int i = 0;
        int cnt = 0;
        vector<int> v;
        while (n != 0){
            int digit = n%10;
            if (digit != 0){
                v.push_back(digit*pow(10,i));
                cnt++;
            }
            i ++;
            n = n/10;
        }
        cout << cnt << endl;
        for (int j = 0; j < v.size(); j++){
            cout << v[j] << endl;
        }
    }
    return 0;
}