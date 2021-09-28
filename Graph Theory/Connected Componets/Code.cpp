#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;
const int sz = 1e4; 

vector < ll > grp[sz]  ; 
ll vis[sz]; 
ll n , e , x , y , cnt ; 

void dfs(ll i){
    while ( !vis[i] ){
        vis[i] = cnt ; 
        for(auto a : grp[i]){
            if(!vis[a]){
                dfs(a);
            }
        }
    }
}


int main(){
    
    cin >> n >> e ; 

    fr(i,0,e){
        cin >> x >> y ; 
        grp[x].pb(y);
        grp[y].pb(x);
    }

    fr(i,1,n+1){
        if(!vis[i]) {
            cnt+=1;
            dfs(i);
        }
    }

    cout << "Total Components Set  : " << cnt << endl;  

    fr(i,1,n+1)
        cout << vis[i] <<" "; cout << endl;

return 0 ;
}
/*



