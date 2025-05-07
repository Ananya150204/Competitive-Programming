#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> inputs(n);
    for (int i = 0; i < n; i++){
        cin >> inputs[i];
    }
    vector<int> ans(n);
    vector<int>positions(n);
    // Store the positions of the numbers from 1 to n
    for (int i = 0; i < n; i++){
        positions[inputs[i]] = i;
    }
    // for (int i = 0; i < n; i++){
    //     cout << positions[i] << " ";
    // }
    //cout << endl;
    ans[0] = 1;
    ans[n-1] = 1;
    int maxIndex = positions[0];
    int minIndex = positions[0];
    // Think u r checking the positions of the group 0,1,2,,,i
    for (int i = 1; i < n-1; i++){
        int indexOfNum = positions[i];
        minIndex = min(minIndex,indexOfNum);
        maxIndex = max(maxIndex,indexOfNum);
        // if (i == 2){
        //     cout << maxIndex << " " << minIndex << " " << indexOfNum << endl;
        // }
        if (maxIndex - minIndex == i){
            ans[i] = 1;
        }
        else {
            ans[i] = 0;
        }
    }
    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}