#include<bits/stdc++.h>
#define ll long long
#define srt(v) v.begin(),v.end()
using namespace std;
ll mod=1e18;
vector<ll>v[10000001];
ll vis[1000002];
ll dis[1000002];
void BFS(ll node){
    queue<ll>q;
    q.push(node);
    vis[node]=1;
    dis[node]=0;
    while(!q.empty()){
        ll cur=q.front();
        q.pop();
        for(int child:v[cur]){
            if(vis[child]==0){

                dis[child]=dis[cur]+1;
                vis[child]=1;
                q.push(child);
            }
        }
    }
}
ll n;
void solve()
{
    ll m,k,w,y,z,zz,c,d,a1,b1,c1=0,d1;

    cin>>n>>m;
    while(m--){
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    BFS(4);
    for(ll i=1;i<=n;i++){
        cout<<" Distance/Level for node  " <<i<<" = "<<dis[i]<<endl;
    }



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
