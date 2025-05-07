#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>> grid(n,vector<char>(m,'.'));
    for (int i = 0; i < n; i = i+2){
        for (int j = 0; j < m; j++){
            grid[i][j] = '#';
        }
    }
    for (int i = 1; i < n; i= i+4){
        grid[i][m-1] = '#';
    }
    for (int i = 3; i < n; i= i+4){
        grid[i][0] = '#';
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}