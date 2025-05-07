#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        vector<vector<char>> grid(n,vector<char>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> grid[i][j];
            }
        }
        int cnt = 0;
        for (int j = 0; j < m-1; j++){
            if (grid[n-1][j] == 'D'){
                cnt ++;
            }
        }
        for (int i = 0; i < n-1; i++){
            if (grid[i][m-1] == 'R'){
                cnt ++;
            }
        }
        cout << cnt << endl;

    }
}