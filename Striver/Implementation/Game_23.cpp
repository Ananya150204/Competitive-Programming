#include <bits/stdc++.h>
using namespace std;
int helper(int n, int m,vector<int>& dp){
    if (n > m){
        return -1;
    }
    if (n==m){
        return 0;
    }
    if (dp[n] != -2){
        return dp[n];
    }
    if (helper(2*n,m,dp) == -1 && helper(3*n,m,dp) == -1){
        return -1;
    }
    if (helper(2*n,m,dp) == -1){
        return 1 + helper(3*n,m,dp);
    }
    if (helper(3*n,m,dp) == -1){
        return 1 + helper(2*n,m,dp);
    }
    return dp[n] = min(1+ helper(2*n,m,dp),1+ helper(3*n,m,dp));
}
int main(){
    int n,m;
    cin >> n >> m;
    //vector<int>dp(m+1,-2);
    if (n==m){
        cout << 0 << endl;
        return 0;
    }
    if (m%n != 0){
        cout << -1 << endl;
        return 0;
    }
    int num = m/n;
    if (num%2 != 0 && num%3 != 0){
        cout << -1 << endl;
        return 0;
    }
    int cnt = 0;
    while (num%2 == 0){
        num = num/2;
        cnt++;
    }
    while (num%3 == 0){
        num = num/3;
        cnt++;
    }
    if (num != 1){
        cout << -1 << endl;
        return 0;
    }
    cout << cnt << endl;
    return 0;
}