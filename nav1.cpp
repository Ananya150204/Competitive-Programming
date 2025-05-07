#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> permut(n);
        string color;
        for(int i =0 ; i < n; i++){
            cin>>permut[i];
        }
        cin>>color;
        vector<int> count(n+1),visited(n+1,0);
        int blacks,num;
        for(int i = 0; i < n; i++){
            if(!visited[i+1]){
                blacks = 0;
                num = i+1;
                set<int>s;
                while(permut[num-1] != i+1){
                    num = permut[num-1];
                    s.insert(num);
                    visited[num] = 1;
                    if(color[num-1] == '0'){blacks++;}
                }
                s.insert(i+1);
                visited[i+1]=1;
                if(color[i] == '0'){blacks++;}
                for(auto j: s){
                    //cout<<j<<endl;
                    count[j] = blacks;
                }
            }
        }
        for(int i = 1; i < n+1; i++){
            cout<<count[i]<<" ";
        }
        cout<<endl;
    }
}