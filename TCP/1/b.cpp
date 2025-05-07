#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> ones;
        vector<int> ele(n);
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            ele[i]=a;
            if (a==1){
                ones.push_back(i);
            }
        }
        int i = n-1;
        while (i >= 0){
            if (ele[i] == 1)
              break;
            i--;
        }
        //cout << i << endl;
        int maxi = n-1-i;
        //cout << maxi << endl;
        if (ones.empty()){
            cout << n << endl;
            continue;
        }
        maxi = max(ones[0],maxi);
        //cout << "hi";
        for (int j = 0; j < ones.size()-1; j++){
            //cout << "In";
            maxi = max(maxi,ones[j+1]-ones[j]-1);
        }
        cout << maxi << endl;
    }
}