
<details>
  <summary>Code : </summary>
  
  ```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

struct node{
    ll x, y, cost ;
};

void path_print(vector<ll>&par, ll n ){
    if( par[n] == -1 ){
        cout << n <<" ";
        return ;
    }
    path_print(par,par[n]);
    cout << n <<" ";
}



int main(){
    ll n, e, p, q, c ;
    cin >> n >> e ;

    vector < node > edgeList ;
    vector < ll > dist(n+1,INT_MAX), par(n+1,-1);

    fr(i,0,e){
        cin >> p  >> q >> c ;
        edgeList.pb({p,q,c});
        if(!i) dist[p] = 0 ;
    }

    for(int i = 1 ; i < n ; i++ ){
        for(auto a : edgeList ){
            if(dist[a.y] > dist[a.x]+a.cost){
                dist[a.y] = dist[a.x]+a.cost;
                par[a.y] = a.x;
            }
        }
    }

    for(int i = 1 ; i <= n ; i++ ){
        cout << "1 to " << i <<" : ";
        path_print(par,i);
        cout << endl;
    }

    return 0 ;
}


  ```
  
</details>
