#include<bits/stdc++.h>
#define ll long long
#define srt(v) v.begin(),v.end()
using namespace std;
ll mod=1e18;
vector<ll>v[10000001];
ll vis[1000002];
void DFS(ll node){

    vis[node]=1;
    cout<<node<<" -> ";

    for(ll i=0;i<v[node].size();i++){
        ll child=v[node][i];
        if(vis[child]==0){
            DFS(child);
        }
    }
}

ll n;
void solve()
{
    ll m,k,w,y,z,zz,c,d,a1,b1,c1=0,d1;
    ll mx=INT_MIN;
    ll mn=INT_MAX;
    string s,ss="",t;

    map<char,ll>mp;
    map<char,char>mp1;
    ll sm=0;
    vector<char>vv;
    vector<ll>aa,bb;

    vector<pair<pair<ll,ll>,ll> >p;

    cin>>n>>m;
    while(m--){
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(4);
}
int main()
{
    int t=1;
   // cin>>t;
    while(t--)
    {
        solve();
    }

}
