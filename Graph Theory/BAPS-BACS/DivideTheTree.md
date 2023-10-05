## Problem Statement:
Removing an edge divides a tree into two components. You have to remove k edges so that maximum size of any components is minimized.
<ul>
  <li>Task 1 : k = 1         #return the sizes and edge </li>
  <li>Task 2 : any value     #return the maximum size of subtree </li>
</ul>


<details>
  <summary> Task 1: </summary>

  ```
    vector<ll>tree[100];
    ll child[100] , vis[100], par[100];
    
    
    ll dfs(ll i){
    
        vis[i] = 1 ;
        int sub = 1 ;
    
        for(auto x : tree[i]){
            if(!vis[x]){
                sub+=dfs(x);
                par[x] = i ;
            }
        }
        child[i] = sub ;
        return sub ;
    }
    
    int main() {
        int n , e , k , x , y ;
        cin >> n >> e >> k;
    
        fr(i,0,e){
            cin >> x >> y ;
            tree[x].pb(y);
        }
    
        par[1] = -1 ;
        dfs(1);
        int mx = INT_MAX , nd ;
    
        fr(i,2,n+1) {
            if(abs(n-child[i])<mx){
                mx = abs(n-child[i]) ;
                nd = i ;
            }
            //cout << child[i] <<" "; cout << endl;
        }
    
        cout <<"Maximized Subtree size : " << mx << " Removed Edge: "<< nd <<" "<<par[nd] <<"\n";
    return 0 ;
    }


  ```
</details>


<details>
  <summary>Task 2: </summary>

  ```
    vector<ll>tree[100];
    ll child[100] , vis[100], par[100];
    ll n , e , k , x , y , ans = 0 ;
    
    
    ll dfs(ll i){
        vis[i] = 1 ;
        int sub = 1 ;
        for(auto x : tree[i]){
            if(!vis[x]){
                ll val = dfs(x);
                sub+=val;
                par[x] = i ;
            }
        }
        child[i] = sub ;
        return sub ;
    }
    
    
    int tar , opn ;
    
    
    int trav(ll i){
    
    
        vis[i] = 1 ;
    
        int sub = 1 ;
        vector<int>v;
    
        for(auto x : tree[i]){
            if(!vis[x]){
                int val = trav(x);
                if(val) v.pb(val);
                else opn+=1;
                sub+=val ;
            }
        }
    
        if(sub<tar) return sub ;
        if(sub==tar) return 0 ;
    
        sort(all(v));
        reverse(all(v));
    
        for(auto x : v ){
            if(sub>=tar) {
                if(sub==tar && i==1 ) opn-=1;
                sub-=x ; opn+=1;
            }
           else break;
        }
        return sub;
    }
    
    int main() {
    
        cin >> n >> e >> k;
    
        fr(i,0,e){
            cin >> x >> y ;
            tree[x].pb(y);
        }
    
    
    
        par[1] = -1 ;
        dfs(1);
    
        int l = 1 , r = n , ans = INT_MAX ;
    
        while( l <= r ){
            memset(vis,0,sizeof(vis));
            tar = (l+r)/2 , opn = 0 ;
            trav(1);
    
            cout << tar <<" = tar opn = "<< opn << endl;
    
            if(opn>k) l = tar+1;
            else if(opn<k) r = tar-1 ;
            else {
                ans = min(ans,tar);
                r = tar-1;
            }
        }
    
        cout <<"Maximum Size of Subtree with " << k << " edge removal : "<<   ans << endl;
    
    
    return 0 ;
    }

  ```


</details>
### Input: 

```
17 16 2
1 2 
1 10 
2 3 
2 6 
3 4 
3 5 
6 7 
6 8 
8 9 
10 11
10 12
11 13
11 14 
12 15
15 16
16 17

```

![graph](https://github.com/Sajjad-Hossain-Talukder/DataStructures-and-Algorithms/assets/63524824/9f2cee3c-7a75-4942-943b-eae9566c2c65)



