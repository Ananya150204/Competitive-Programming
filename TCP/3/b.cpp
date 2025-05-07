#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        int cnt = 0;
        vector<vector<char>> grid(n,vector<char>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> grid[i][j];
                if (grid[i][j] == '#'){
                    cnt ++;
                }
            }
        }
        bool f = false;
        cnt = (cnt+1)/2;
        int k = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (grid[i][j] == '#'){
                    k++;
                    if (k == cnt){
                        cout << i+1 << " " << j+1 << endl;
                        f = true;
                        break;
                    }
                }
            }
            if (f){
                break;
            }
        }
    }
}