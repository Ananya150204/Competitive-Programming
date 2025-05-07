#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> days(7);
    int sum = 0;
    for (int i = 0; i < 7; i++){
        cin >> days[i];
        sum += days[i];
        if (i > 0){
            days[i] += days[i-1];
        }
    }
    
    int num = n%sum;
    if (num == 0){
        int k = 6;
        while (k > 0 && days[k] == days[k-1]){
            k--;
        }
        cout << k+1 << endl;
    }
    for (int i = 0; i < 7; i++){
        if (num > 0 && num <= days[i]){
            cout << i+1 << endl;
            break;
        }
    }
}