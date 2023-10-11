<details>
  <summary>Explanation: </summary>
<br>
  <ul> 
    <li> <a href="https://youtu.be/aAALKHLeexw?si=wDbOfdP-h4NTlU1z"> Youtube </a> </li>
    <li> <a href="https://cp-algorithms.com/data_structures/fenwick.html#one-based-indexing-approach"> CP Algo </a> </li>
  </ul>
  

</details>

<details>
  <summary> Code: One based Indexing  </summary>


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
