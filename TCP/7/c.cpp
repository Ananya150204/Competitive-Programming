#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int n,k;
    string s;
    cin >> n >> k >> s;
    vector<int> arr(26);
    for (int i = 0; i < s.size(); i++){
        arr[s[i]-'a'] ++;
    }
    int x = n/k;
    string ans;
    for (int i = 0; i < min(25,n/k); i++){
        while (k-ans.size() > arr[i]){ // These many compartments "k-ans.size()" cannot get i + 'a'
            ans.push_back(i+'a');
        }
    }
    char ch = 'a' + min(25,n/k);
    while (ans.size() < k){
        ans += ch;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}