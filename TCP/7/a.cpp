#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n;
    cin >> n;
    int maxx = 0;
    int minx = INT_MAX;
    int maxy = 0;
    int miny = INT_MAX;
    for (int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        if ( x != 0){
            if (x > 0){
                maxx = max(maxx,x);
                //cout << "maxx" <<  maxx << endl;
            }
            else if (x <= 0){
                minx = min(minx,x);
                //cout << "minx" << minx << endl;
            }
        }
        else {
            if (y > 0){
                maxy = max(maxy,y);
                //cout << "maxy" << maxy << endl;
            }
            
            if (y <= 0){
                miny = min(miny,y);
                //cout << "miny" << miny << endl;
            }
        }
        
    }
    cout << 2*(maxx+maxy+((minx != INT_MAX) ? abs(minx) : 0) + ((miny != INT_MAX) ? abs(miny) : 0)) << endl;
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}