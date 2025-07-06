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
    int minx=1005,maxx=-1005,miny=1005,maxy=-1005;
    for(int t=4,x,y;t--;){
        cin>>x>>y;
        minx=min(minx,x);
        maxx=max(maxx,x);
        miny=min(miny,y);
        maxy=max(maxy,y);
    }
    cout<<(maxx-minx)*(maxy-miny)<<"\n";
}