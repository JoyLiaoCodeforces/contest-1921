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
    int h,w,xa,ya,xb,yb;
    cin>>h>>w>>xa>>ya>>xb>>yb;
    if(xa>=xb){
        cout<<"Draw\n";return;
    }
    int mid=(xa+xb+1)/2,sa=mid-xa,sb=xb-mid;
    int la=max(1LL,ya-sa),ra=min(w,ya+sa);
    int lb=max(1LL,yb-sb),rb=min(w,yb+sb);
    if(sa-sb){
        if(la<=lb&&rb<=ra)cout<<"Alice\n";
        else cout<<"Draw\n";
    }
    else{
        if(lb<=la&&ra<=rb)cout<<"Bob\n";
        else cout<<"Draw\n";
    }
}