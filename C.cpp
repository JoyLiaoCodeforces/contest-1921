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
    int n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<int>m(n+1);
    for(int i=1;i<=n;i++)cin>>m[i];
    int c=0;
    for(int i=1;i<=n;i++)c+=min(b,(m[i]-m[i-1])*a);
    cout<<(c>=f?"no\n":"yes\n");
}