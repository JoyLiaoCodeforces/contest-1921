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
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int bl=0,br=0,al=0,ar=0;
    for(int i=0;i<n;i++)al+=a[i];
    for(int i=m-n;i<m;i++)br+=b[i];
    int ans=br-al-bl+ar;
    // cout<<ans<<",";
    for(int i=0,j=m-n,k=n-1;i<n;i++,j++,k--){
        bl+=b[i];br-=b[j];
        al-=a[k];ar+=a[k];
        ans=max(ans,(br-al-bl+ar));
        // cout<<(br-al-bl+ar)<<",";
    }
    // cout<<"\n";
    cout<<ans<<"\n";
}