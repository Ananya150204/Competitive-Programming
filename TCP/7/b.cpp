#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    vector<vector<char>> v(8,vector<char>(8));
    string s;
    //cin >> s;
    for (int i = 0; i < 8; i++){
        cin >> s;
        for (int j = 0; j < 8; j++){
            v[i][j] = s[j];
        }
    }
    bool found = false;
    for (int i = 0; i < 8; i++){
        bool isR = true;
        bool singleR = false;
        for (int j = 0; j < 8; j++){
            if (v[i][j] == 'B'){
                isR = false;
            }
            else if (v[i][j] == 'R'){
                singleR = true;
            }
        }
        if (singleR && isR){
            found = true;
            break;
        }
    }
    if (found){
        cout << 'R' << endl;
    }
    else {
        cout << 'B' << endl;
    }

    // for (int j = 0; j < 8; j++){
    //     bool isB = true;
    //     bool singleB = false;
    //     for (int i = 0; i < 8; i++){
    //         if (v[i][j] == 'R'){
    //             isB = false;
    //         }
    //         else if (v[i][j] == 'B'){
    //             singleB = true;
    //         }
    //     }
    //     if (singleB && isB){
    //         found = true;
    //         break;
    //     }
    // }
    // if (found){
    //     cout << 'B' << endl;
    // }
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}