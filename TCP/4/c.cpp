#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        vector<int> v(n);
        long maxi = INT_MIN;
        for (int i = 0; i < n; i++){
            long num;
            cin >> num;
            //s.insert(num);
            v[i] = num;
            maxi = max(maxi,num);
            //pq.push(num);
        }
        vector<long> ans;
        for (int i = 0; i < m; i++){
            char c;
            int l,r;
            cin >> c >> l >> r;
            
            if (c == '+'){
                if (maxi >= l && maxi <= r){
                    maxi ++;
                }
            }
            else {
                if (maxi >= l && maxi <= r){
                    maxi --;
                }
            }
            //pq.push(maxi);
            ans.push_back(maxi);
        }
        for (int i = 0; i < m; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}