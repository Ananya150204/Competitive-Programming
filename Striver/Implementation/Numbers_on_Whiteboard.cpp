#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        priority_queue<int> pq;
        for (int i = 1; i <= n; i++){
            pq.push(i);
        }
        cout << 2 << endl;
        while (pq.size() > 1){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            cout << first << " " << second << endl;
            pq.push(ceil(1.0*(first+second)/2));
        }
        //cout << pq.top() << endl;
    }
}