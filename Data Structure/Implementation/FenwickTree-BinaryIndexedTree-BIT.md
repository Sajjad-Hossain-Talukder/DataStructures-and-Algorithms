<details>
  <summary>Explanation: </summary>
<br>
  
  <ul> 
    <li> <a href="https://youtu.be/aAALKHLeexw?si=wDbOfdP-h4NTlU1z"> Youtube </a> </li>
    <li> <a href="https://cp-algorithms.com/data_structures/fenwick.html#one-based-indexing-approach"> CP Algo </a> </li>
  </ul>
  

</details>

<details>
  <summary> Code: one-based Indexing (sum)  </summary>


```
const int sz = 1001;
int a[sz], tree[sz], n ;

void build_update(int i, int val){
  for( ; i<=sz; i+=(i&(i*(-1))) ) tree[i] += val ;
}

ll query(ll n){
    ll res = 0 ;
    for ( ; n > 0; n -= n & -n) res+=tree[n];
    return res ;
}

int main() {

    cin >> n ;

    memset(tree,0,sizeof(tree));
    fr(i,1,n+1) {
        cin >> a[i];
        build_update(i,a[i]);
        //fr(j,1,n+1) cout << tree[j] <<" "; cout << endl;
    }

    cout << query(7) << endl;

return 0 ;
}

```


</details>

<details>
  <summary> Code : Zero Based Indexing (sum) </summary>

  
  



```

const int sz = 1001;
int a[sz], tree[sz], n ;

int query_z(int r) {
    int res = 0;
    for (; r >= 0; r = (r & (r + 1)) - 1) res += tree[r];
    return res;
}

int range(int l, int r) {
    return query_z(r) - query_z(l - 1);
}

void build_update_z(int x, int val) {
    for (; x < n; x = x | (x + 1)) tree[x] += val;
}



int main() {

    cin >> n ;

    memset(tree,0,sizeof(tree));
    fr(i,0,n) {
        cin >> a[i];
        build_update_z(i,a[i]);

    }

    //build_update(5,5);
    cout <<range(2,4) << endl;

return 0 ;
}


```

</details>
