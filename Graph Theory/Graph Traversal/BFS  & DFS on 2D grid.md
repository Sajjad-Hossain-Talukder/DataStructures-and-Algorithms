## Traversal on 2D Grid

<details> 
    
<summary> BFS </summary>
    
```
    
#include<bits/stdc++.h>
#define ll             long long
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define fr(i,s,e)      for(ll i=s;i<e;i++)
#define rfr(i,e,s)     for(ll i=e;i>=s;i--)
#define endl           "\n"
#define sz(a)          (ll)a.size()
#define mem1(a)        memset(a,-1,sizeof(a))
#define pii            pair<int,int>
#define mod            1000000007
#define fast           ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void show(vector<vector<bool>>vis){
    for(auto a : vis ){
        for(auto b : a ){
            cout << b <<" ";
        }
        cout << endl;
    }
}

int main(){
    ll n , m ;
    cin >> n >> m ;
    ll a[n][m] ;

    fr(i,0,n){
        fr(j,0,m){
            cin >> a[i][j];
        }
    }

    queue<pair<ll,ll>>q ;
    vector<vector<bool>>vis(n,vector<bool>(m,false));

    show(vis);

    q.push({0,0});
    
    while(!q.empty()){
        pair<ll,ll>p = q.front();
        q.pop();
        ll x = p.first , y = p.second ;
        if(vis[x][y]) continue ;
        vis[x][y] = 1 ;
        if(x+1<n && !vis[x+1][y]) q.push({x+1,y});
        if(x-1>=0 && !vis[x-1][y]) q.push({x-1,y});
        if(y+1<m && !vis[x][y+1]) q.push({x,y+1});
        if(y-1>=0 && !vis[x][y-1]) q.push({x,y-1});
    }


    show(vis);



return 0 ;
}



```
    
</details>     
    
<details> 
    
<summary> DFS </summary>
    
```
    
#include<bits/stdc++.h>
#define ll             long long
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define fr(i,s,e)      for(ll i=s;i<e;i++)
#define rfr(i,e,s)     for(ll i=e;i>=s;i--)
#define endl           "\n"
#define sz(a)          (ll)a.size()
#define mem1(a)        memset(a,-1,sizeof(a))
#define pii            pair<int,int>
#define mod            1000000007
#define fast           ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;
ll n , m ;
ll a[100][100] ;
vector<vector<bool>>vis(100,vector<bool>(100,false));

void dfs(ll x , ll y ){
    if(!vis[x][y]){
        vis[x][y] = 1 ;
        if(x+1<n && !vis[x+1][y]) dfs(x+1,y);
        if(x-1>=0 && !vis[x-1][y]) dfs(x-1,y);
        if(y+1<m && !vis[x][y+1]) dfs(x,y+1);
        if(y-1>=0 && !vis[x][y-1]) dfs(x,y-1);
    }
}

void show(){
    fr(i,0,n){
        fr(j,0,m){
            cout <<  vis[i][j] << " ";
        }
        cout << endl;
    }
}



int main(){

    cin >> n >> m ;
    fr(i,0,n){
        fr(j,0,m){
            cin >> a[i][j];
        }
    }
    
    show();
    dfs(0,0);
    show();


return 0 ;
}



    
```
   
</details>  
    

<details> 
    
<summary> Source :  </summary>
    
 https://www.youtube.com/watch?v=V-w2ur2kVh0
    
</details>
    
