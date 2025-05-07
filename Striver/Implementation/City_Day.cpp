#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        int j = 1;
        while (i-j >= 0 && j <= x && arr[i-j] > arr[i]){
            j++;
        }
        //if (j > x)
        int k = 1;
        while (i+k < n && k <= y && arr[i+k] > arr[i]) {
            k++;
        }
        if (j > x && k > y){
            cout << i+1 << endl;
            return 0;
        }
        if (i+k >= n){
            cout << i+1 << endl;
            return 0;
        }
        if (i < j && k > y){
            cout << i+1 << endl;
            return 0;
        }
        
    }
}