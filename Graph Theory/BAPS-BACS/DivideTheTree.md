## Problem Statement:
Removing an edge divides a tree into two components. You have to remove k edges so that maximum size of any components is minimized.
<ul>
  <li>Task-1 : k = 1         #return the sizes and edge </li>
  <li>Task-2 : any value     #return the sizes and edges </li>
</ul>


<details>
  <summary> Task 01: </summary>

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

![Uploading image.png…]()

