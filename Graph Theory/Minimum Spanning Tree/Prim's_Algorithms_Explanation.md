Source : http://www.shafaetsplanet.com/?p=692

### Given Graph : 

<img src="../../images/prims1.png">

### input : 
```
8 11
1 5 2 
1 4 10
1 2 4
2 4 8
2 3 18
3 4 11
4 5 5
4 7 11
4 8 9
6 7 1
6 8 2

```

### Resulting Graph : 

<img src="../../images/prims2.png">

### Output : 

```
1 5
1 2
5 4
4 8
8 6
6 7
4 3
```

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

ll node , edge , x , y , cost , source , min_cost = 0 ;
priority_queue< pair<ll,ll>  ,vector<pair<ll,ll>>, greater<pair<ll,ll>> > g ;


int main(){
    cin >> node >> edge ;
    vector < pair<ll,ll> > graph[node+1] ;
    vector <bool> vis(node+1,0);

    for(int i = 0 ; i < edge ; i++ ){
        cin >> x >> y >> cost ;
        graph[x].pb({cost,y});
        graph[y].pb({cost,x});
    }

    cin >> source ;
    g.push({0,source});

    while( !g.empty()){
        pair<ll,ll>p = g.top();
        x = p.first , y = p.second ;
        g.pop();
        if(!vis[y]){
            min_cost += x;
            vis[y] = 1 ;
            for(auto a : graph[y] ){
                if(!vis[a.second]){
                    g.push(a);
                }
            }
        }
    }


    cout << min_cost << endl;



return 0 ;
}

/*
4 5
1 2 3
1 3 4
2 3 4
2 4 6
3 4 7
1
*/



```
</details>
