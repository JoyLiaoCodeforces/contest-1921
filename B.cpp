#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define int ll
using pii=pair<int,int>;

void solve();
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)solve();
}

void solve(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i])x++;
        else if(a[i]<b[i])y++;
    }
    cout<<max(x,y)<<"\n";
}