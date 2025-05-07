#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector <long long> arr(n);
    for (long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long maxi = INT_MAX;
    long long sum = 0;
    for (long long i = n-1; i >= 0; i--){
        if (arr[i] < maxi){
            sum = sum + arr[i];
            maxi = arr[i];
        }
        else {
            if (maxi > 1){
                sum = sum + maxi-1;
                maxi --;
            }
            
        }
    }
    cout << sum << endl;
}